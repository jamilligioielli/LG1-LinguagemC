//agenda com 5 pessoas - versão 2//
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
//declarando as funções usadas//
int cadastro_1();
int pesquisa();
int ordenacao();
int aleracao();
int saida();
int pesquisa_nome();
int cadastro_2();
int i, j, menu;

struct cad{
		char nome[60], ende[80], tel[20];
		int idade;};
	struct cad x[5], aux;
int saida(){
	for (i=0; i<5; i++)
            printf("\n%s %i anos \n%s %s \n",x[i].nome, x[i].idade, x[i].ende, x[i].tel);
}
int cadastro_1(){
	for (i=0; i<5; i++){
		 printf ("\n Cadastro %d: \n", i+1);
		 printf ("\n Entre com o nome: \n");
		 fflush(stdin);
		 fgets(x[i].nome, 60, stdin);
		 printf ("\n Entre com o endereço: \n");
		 fflush(stdin);
		 fgets(x[i].ende, 80, stdin);
		 printf ("\n Entre com a idade: \n");
		 scanf ("%d", &x[i].idade);
		 printf ("\n Entre com o telefone: \n");
		 fflush(stdin);
		 fgets(x[i].tel, 20, stdin);}
}
int cadastro_2(){
	printf ("\n Entre com o nome: \n");
		        fflush(stdin);
		        fgets(x[i].nome, 60, stdin);
		        printf ("\n Entre com o endereço: \n");
		        fflush(stdin);
		        fgets(x[i].ende, 80, stdin);
		        printf ("\n Entre com a idade: \n");
		        scanf ("%d", &x[i].idade);
		        printf ("\n Entre com o telefone: \n");
		        fflush(stdin);
		        fgets(x[i].tel, 20, stdin);
}
int pesquisa(){
	char pesq[60];
	printf("\n \n Digite o nome que será pesquisado: ");
            fflush(stdin); fgets(pesq,60,stdin);
            for(i=0;i<5;i++){
                if (strcmp(pesq, x[i].nome)==0) break;}
}
int ordenacao(){
	for (i=0; i<4; i++)
            for (j=i+1; j<5; j++){
            if(strcoll(x[i].nome , x[j].nome) > 0 ){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;}}
	        printf ("\n \t Agenda em ordem alfabética \n");
	        saida();
}
int alteracao(){
	pesquisa();
	printf ("\n \t Novo Cadastro \n");
	cadastro_2();
	printf("\n \t Agenda atualizada com sucesso! \n");
}
int pesquisa_nome(){
	char pesq[60];
	printf("\n \n Digite o nome que será pesquisado: ");
            fflush(stdin); fgets(pesq,60,stdin);
            for(i=0;i<5;i++){
                if (strcmp(pesq, x[i].nome)==0) break;}
                	printf("\nCadastro %d\n", i+1);
                printf("Nome: %s",x[i].nome);
                printf("Idade: %d anos", x[i].idade);
				}

int remocao(){
	pesquisa();
    printf (" \n Tecle <enter> para remover (obs. tecle 0 para remv idade)");
    cadastro_2();
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	do{
	printf ("\n\nEscolha uma opção: \n1.Cadastro e registros \n2.Pesquisa de registro \n3.Classificação alfabética \n4.Alteração de registro \n5.Agenda Completa \n6.Remoção \n7.Sair \n");
	scanf ("%d", &menu);
	system ("cls");
	switch(menu){
		case 1: cadastro_1(); break;
		case 2: pesquisa_nome(); break;
		case 3: ordenacao(); break;
		case 4: alteracao(); break;
		case 5: saida(); break;
		case 6: remocao(); break;
	}
	}while(menu!=7);
	getch();
	return 0;
}
