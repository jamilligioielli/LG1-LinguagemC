#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[5], b[5], c[10], i;
	for (i=0; i<5; i++)
	{
		printf ("Insira o valor da matriz A: ");
		scanf ("%d", &a[i]);
	}
	for (i=0; i<5; i++)
	{
		printf ("Insira o valor da matriz B: ");
		scanf ("%d", &b[i]);
	}
	for (i=0; i<10; i++)
	{
		if (i<5)
		c[i]=a[i];
		c[i]=b[i];
	}
	for (i=0; i<10; i++){
		printf (" \n %d ", c[i]);
	}
	getch ();
	return 0;
}
