//Ordenação e Soma de vetores - por valor//

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int entrade(int x[12]);
int ordenacao(int f[12]);
int soma(int f[12], int g[12], int h[12]);
int i, j, a[12], b[12],c[12];

int soma(int f[12], int g[12], int h[12]){
	for (i=0; i<12; i++){
		h[i]=f[i]+g[i];
	}
	for (i=0;i<12;i++){
		printf("\n%d", h[i]);
	}
}

int entrade (int x[12]){
	for (i=0; i<12; i++)
	{
		scanf ("%d", &x[i]);
	}
}

int ordenacao(int f[12]){
	int aux;
	for (i=0;i<11;i++)
    for (j=i+1; j<12; j++)
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
	printf("\n\n\tOrdenção e Soma de Vetores\n\n");
	op='s';
	while (op=='S'|| op=='s'){
	printf ("Insira os valores de A:\n");
	entrade(a);
	printf ("Insira os valores de B:\n");
	entrade(b);
	ordenacao(a);
	ordenacao(b);
	printf("\n\n Os valores de C:");
	soma(a,b,c);
	printf ("\n\nDeseja calcular novamente? S=sim / N=não + enter\n");
    fflush(stdin); op=getchar();
	system ("cls");}
}

