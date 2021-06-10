//cadastro de notas de alunos//
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
//declarando funções//
int cadastre();
int classificacao();
int correcao();
int pesquisa();
int aprovade();
int reprovade();
int saida();
//declarando v.g e struct//
int i, j, op;
struct aluno{
	char nome[60];
	float nota1, nota2;
	float medie;
};
struct aluno t[20], aux;

int cadastre(){
	printf ("\n\n Media Bimestral de Alunos\n");
	for (i=0; i<=19; i++){
		 printf ("\n Cadastro %d \n", i+1);
		 printf ("\n Entre com o nome: \n");
		 fflush(stdin);
		 fgets(t[i].nome, 60, stdin);
		 printf ("\n Entre com a nota 1: \n");
		 fflush(stdin);
		 scanf("%f", &t[i].nota1);
		 printf ("\n Entre com a nota 2: \n");
		 fflush(stdin);
		 scanf("%f", &t[i].nota2);
		 t[i].medie = ((t[i].nota1 + t[i].nota2)/2);
	}
}
int saida(){
	for (i=0; i<=19; i++)
            printf("\n%s \n%.2f", t[i].nome, t[i].medie);
}
int aprovade(){
	printf ("\n Lista de Aprovados\n");
	for (i=0; i<=19; i++){
		if(t[i].medie >=7){
               fflush(stdin); printf("\nNome: %s",t[i].nome);
               fflush(stdin); printf("Media: %.2f\n",t[i].medie);
		}}
	
}
int reprovade(){
	printf ("\n Lista de Reprovados\n");
	for (i=0; i<=19; i++){
		if(t[i].medie <7){
		 fflush(stdin); printf("\nNome: %s",t[i].nome);
		 fflush(stdin); printf("Media: %.2f\n",t[i].medie);
		}}
	
}

int classificacao(){
	for (i=0; i<=18; i++)
            for (j=i+1; j<=19; j++){
            if(strcoll(t[i].nome , t[j].nome) > 0 ){
                aux=t[i];
                t[i]=t[j];
                t[j]=aux;}}
	        printf ("\n \t Alunos em ordem alfabética \n");
	        saida();
}
int pesquisa(){
	char pesq[60];
	printf("\n \n Digite o nome que será pesquisado: ");
            fflush(stdin); fgets(pesq,60,stdin);
            for(i=0;i<=19;i++){
                if (strcmp(pesq, t[i].nome)==0) break;}
}
int correcao(){
	pesquisa();
	printf ("\n \t Novo Cadastro \n");
	printf ("\n Entre com o nome: \n");
		 fflush(stdin);
		 fgets(t[i].nome, 60, stdin);
		 printf ("\n Entre com a nota 1: \n");
		 fflush(stdin);
		 scanf("%f", &t[i].nota1);
		 printf ("\n Entre com a nota 2: \n");
		 fflush(stdin);
		 scanf("%f", &t[i].nota2);
	printf("\n \t Atualizado com sucesso! \n");
}


int main (){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\nCadastro de Notas de Alunos\n ");
	do{
	printf ("\n Escolha uma opção: \n1.Cadastro e registros  \n2.Classificação \n3.Correção  \n5.Aprovados \n6.Reprovados \n7.Sair \n");
	scanf ("%d", &op);
	system ("cls");
	switch(op){
		case 1: cadastre(); break;
		case 2: classificacao(); break;
		case 3: correcao(); break;
		case 4: pesquisa(); break;
		case 5: aprovade(); break;
		case 6: reprovade(); break;
	}
	}while(op!=7);
	getch();
	return 0;
}
//Jamilli :)//
