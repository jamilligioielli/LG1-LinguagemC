#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i;
	for (i=0; i<20; i++)
	{
		printf ("Insira o valor da matriz A: ");
		scanf ("%d", &a[i]);
	}
	for (i=0; i<30; i++)
	{
		printf ("Insira o valor da matriz B: ");
		scanf ("%d", &b[i]);
	}
	for (i=0; i<50; i++)
	{
		if (i<20)
		c[i]=a[i];
		else
		c[i]=b[i-20];
	}
	for (i=0; i<50; i++){
		printf (" \n %d ", c[i]);
	}
	getch ();
	return 0;
}
