#include<stdio.h>
#include<conio.h>

int main()
{
	int a[7], b[7], i,j;
	int c[7][2];
	printf ("\n Insira o valor da matriz A(7 elementos): ");
	for (i=0; i<=6; i++)
	{
		scanf ("%d", &a[i]);
	}
	printf (" \n Insira o valor da matriz B(7 elementos): ");
	for (i=0; i<=6; i++)
	{
	scanf ("%d", &b[i]);}
	for (i=0; i<=7; i++)
	for (j=0; j<=1; j++){
	if (j<1)
	c[i][j]=a[i];
	else
	c[i][j]=b[i];}
	printf (" \n A matriz C: \n ");
	for (i=0; i<=6; i++)
	for (j=0; j<=1; j++){
		printf(" \t %d ", c[i][j]);
	}
	getch();
	return 0;
    }
    
