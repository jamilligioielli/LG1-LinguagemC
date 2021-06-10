//fibonacci - por referência//
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int fibonacci( int *n);
int  n, a, b,c;

int fibonacci(int *n)
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	a=1;
	b=0;
	printf ("\nFibonacci dos %d termos\n\n", *n);
	for (i=1; i<=*n; i++)
	{
	printf ("%d \n", a);
	c=b;
	b=a;
	a=c+b;
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	char op;
	int *r;
	op='s';
	while (op=='S'|| op=='s'){
	printf("\n\n\tSérie Fibonacci\n\n");
	printf("\n Digite o número dos termos:\n ");
	scanf("%d", &n);
	r=&n;
	fibonacci (r);
	printf ("\n\nDeseja calcular novamente? (S=sim / N=não + enter)\n");
    fflush(stdin); op=getchar();
	system ("cls");}
}
