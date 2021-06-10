//junção de matrizes - por valor//
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int juncao(int x[30], int y[30], int z[60]);
int entradaA(int x[30]);
int entradaB(int y[30]);
int saidaC(int z[60]);
int i, a[30], b[30], c[60];

int entradaA(int x[30]){
	printf ("Insira os valores de A:\n");
	for (i=0; i<30; i++)
	{
		scanf ("%d", &x[i]);
	}
}
int entradaB(int y[30]){
	printf ("Insira os valores de B:\n");
	for (i=0; i<30; i++)
	{
		scanf ("%d", &y[i]);
	}
}

int saidaC(int z[60]){
		for (i=0; i<60; i++){
		printf("\n%d", z[i]);
	}
}
int juncao(int x[30], int y[30], int z[60]){
	for(i=0;i<60; i++){
		if(i<30){
		z[i]=x[i];}
		else{
		z[i]=y[i-30];}
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n\t Junção de Matrizes\n\n");
	char os;
	os='s';
	while(os=='s'||os=='S'){
	entradaA(a);
	entradaB(b);
	printf("\n Os Valores de C:\n");
	juncao(a,b,c);
	saidaC(c);
	printf ("\n\nDeseja efetuar uma nova junção? S=sim / N=não + <enter>\n");
    fflush(stdin); os=getchar();}
}
