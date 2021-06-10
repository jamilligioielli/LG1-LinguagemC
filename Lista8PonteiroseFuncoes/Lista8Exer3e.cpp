//Ordenação e Soma de vetores - por referência//
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int entrade(int t, int *x);
int ordenacao(int t, int *f);
int soma(int t, int *f, int *g, int *h);
int i, j;

int soma(int t, int *f, int *g, int *h){
	for (i=0; i<t; i++){
		h[i]=f[i]+g[i];
	}
	for (i=0;i<t;i++){
		printf("\n%d", h[i]);
	}
}

int entrade (int t, int *x){
	for (i=0; i<t; i++)
	{
		scanf ("%d", &x[i]);
	}
}

int ordenacao(int t,int *f){
	int aux;
	for (i=0;i<t-1;i++)
    for (j=i+1; j<t; j++)
	  {
	  	if (f[i]>f[j])
	  	{
	  		aux=f[i];
	  		f[i]=f[j];
	  		f[j]=aux;
		  }}
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	char op;
	int a[3], b[3],c[3];
	op='s';
	while (op=='S'|| op=='s'){
	printf("\n\n\tOrdenção e Soma de Vetores\n\n");
	printf ("Insira os valores de A:\n");
	entrade(3,a);
	printf ("Insira os valores de B:\n");
	entrade(3,b);
	ordenacao(3,a);
	ordenacao(3,b);
	printf("\n\n Os valores de C:");
	soma(3,a,b,c);
	printf ("\n\nDeseja calcular novamente? S=sim / N=não + enter\n");
    fflush(stdin); op=getchar();
	system ("cls");}
}

