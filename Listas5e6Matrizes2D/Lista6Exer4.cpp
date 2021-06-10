#include<stdio.h>
#include<conio.h>

int main()
{
	int a[4], b[4], i,j;
	int c[4][2];
	printf ("\n Insira o valor da matriz A(4 elementos): ");
	for (i=0; i<=3; i++)
	{
		scanf ("%d", &a[i]);
	}
	printf (" \n Insira o valor da matriz B(4 elementos): ");
	for (i=0; i<=3; i++)
	{
	scanf ("%d", &b[i]);}
	for (i=0; i<=4; i++)
	for (j=0; j<=1; j++){
	if (j<1)
	c[i][j]=a[i]*2;
	else
	c[i][j]=b[i]-5;}
	printf (" \n A matriz C: \n ");
	for (i=0; i<=3; i++)
	for (j=0; j<=1; j++){
		printf(" \t %d ", c[i][j]);
	}
	getch();
	return 0;
    }
