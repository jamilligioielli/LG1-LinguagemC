#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[5], i;
	for (i=0; i<5; i++)
	{
		printf ("Entre com os valores da matriz A: ");
		scanf ("%d", &a[i]);
	}
	for (i=0; i<5; i++)
	{
	printf ("Entre com os valores da matriz B: ");
	scanf ("%d", &b[i]);
	}
	for (i=0; i<5; i++)
	{
		c[i]=a[i]-b[i];
	}
	for (i=0; i<5; i++)
	{
		printf (" \n O resultado eh: %d \n", c[i]);
	}
	getch();
	return 0;
}
