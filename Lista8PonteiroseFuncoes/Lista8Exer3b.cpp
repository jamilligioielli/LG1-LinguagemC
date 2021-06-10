//junção de matrizes - por referência//
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int juncao(int t, int ta, int *c, int *a, int *b);
int entradaA(int t, int *a);
int entradaB(int t, int *b);
int saidaC(int ta, int*c);
int i;

int entradaA(int t, int *a){
	printf ("Insira os valores de A:\n");
	for(i=0;i<t;i++){
		scanf ("%d", &a[i]);
	}
}
int entradaB(int t, int *b){
	printf ("Insira os valores de B:\n");
	for(i=0;i<t;i++){
		scanf ("%d", &b[i]);
	}
}
int juncao(int t, int ta, int *c, int *a, int *b){
		for(i=0;i<ta; i++){
		if(i<t){
		c[i]=a[i];}
		else{
		c[i]=b[i-t];}
    }
}
int saidaC(int ta,int *c){
	for (i=0; i<ta; i++){
		printf("\n%d", c[i]);
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[30], b[30], c[60];
	char os;
	os='s';
	while(os=='s'||os=='S'){
	printf("\n\n\t Junção de Matrizes\n\n");
	entradaA(30, a);
	entradaB(30,b);
	printf("\n Os Valores de C:\n");
	juncao(30,60,c,a,b);
	saidaC(60,c);
	printf ("\n\nDeseja efetuar uma nova junção? S=sim / N=não + enter\n");
    fflush(stdin); os=getchar();}
}
