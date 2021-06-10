//fibonacci - por valor//
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int fibonacci(int x, int y, int z);
int  n, a, b,c;

int fibonacci(int x, int y, int z)
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	printf("\n Digite o número dos termos:\n ");
	scanf("%d", &n);
	x=1;
	y=0;
	printf ("\nFibonacci dos %d termos\n\n", n);
	for (i=1; i<=n; i++)
	{
	printf ("%d \n", x);
	z=y;
	y=x;
	x=z+y;
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	char op;
	op='s';
	while (op=='S'|| op=='s'){
	printf("\n\n\tSérie Fibonacci\n\n");
	fibonacci (a, b, c);
	printf ("\n\nDeseja calcular novamente? [S]im ou [N]ão + <enter>\n");
    fflush(stdin); op=getchar();
	system ("cls");}
}
