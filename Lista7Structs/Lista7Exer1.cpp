 //programa de agenda com cadastro para 5 pessoas//
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
//declara��o//
int main()
{
	printf("\n \t Agenda \n");
	setlocale(LC_ALL, "Portuguese");
	struct cad{
		char nome[60], ende[80], tel[20];
		int idade;};
	struct cad x[5], aux;
	int menu, i, j, acha;
	char pesq[60];
	do{
	printf ("\n Escolha uma op��o: \n1.Cadastro e registros \n2.Pesquisa de registro \n3.Classifica��o alfab�tica \n4.Altera��o de registro \n5.Agenda Completa \n6.Sair \n");
	scanf ("%d", &menu);
	system("cls");
	switch (menu){
		//cadastro//
		case 1: 
		for (i=0; i<5; i++){
		 printf ("\n Cadastro %d: \n", i+1);
		 printf ("\n Entre com o nome: \n");
		 fflush(stdin);
		 fgets(x[i].nome, 60, stdin);
		 printf ("\n Entre com o endere�o: \n");
		 fflush(stdin);
		 fgets(x[i].ende, 80, stdin);
		 printf ("\n Entre com a idade: \n");
		 scanf ("%d", &x[i].idade);
		 printf ("\n Entre com o telefone: \n");
		 fflush(stdin);
		 fgets(x[i].tel, 20, stdin);}
         break;
		 //pesquisa de registro//
		 case 2: 
			printf("\n \n Entre com o nome que ser� pesquisado: ");
            fflush(stdin); fgets(pesq,60,stdin);
            i=0;
            acha=0;
            while(i<=4){
                if ((strcmp(pesq, x[i].nome)==0) && acha==0)
                    {acha=1;    
                printf("\nCadastro %d\n", i+1);
                printf("Nome: %s",x[i].nome);
                printf("Idade: %d anos", x[i].idade);}
                else
                    i++;}break;
        //ordena��o alfab�tica//
        case 3: //a fun��o strcoll � dada de acordo com a locale.h, mas tem a mesma finalidade que a strcmp//
            for (i=0; i<4; i++)
            for (j=i+1; j<5; j++){
         	if(strcoll(x[i].nome , x[j].nome) > 0 ){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;}}
	        printf ("\n \t Agenda em ordem alfab�tica \n");
	        for (i=0; i<5; i++)
            printf("\n%s %i anos \n%s %s \n",x[i].nome, x[i].idade, x[i].ende, x[i].tel);break;
        //altera��o//
        case 4: printf("\n \n Digite o nome que ser� pesquisado: ");
            fflush(stdin); fgets(pesq,60,stdin);
            for(i=0;i<5;i++){
                if (strcmp(pesq, x[i].nome)==0) break;}
                printf ("\n \t Novo Cadastro \n");
		        printf ("\n Entre com o nome: \n");
		        fflush(stdin);
		        fgets(x[i].nome, 60, stdin);
		        printf ("\n Entre com o endere�o: \n");
		        fflush(stdin);
		        fgets(x[i].ende, 80, stdin);
		        printf ("\n Entre com a idade: \n");
		        scanf ("%d", &x[i].idade);
		        printf ("\n Entre com o telefone: \n");
		        fflush(stdin);
		        fgets(x[i].tel, 20, stdin);
		        printf("\n \t Agenda atualizada com sucesso! \n");
                break;
				case 5:
					for (i=0; i<5; i++){
                printf("\n%s %i anos \n%s %s \n",x[i].nome, x[i].idade, x[i].ende, x[i].tel);}
				break;}
	}while(menu!=6);
	getch();
	return 0;
}
//Jamilli Vit�ria Gioielli//
