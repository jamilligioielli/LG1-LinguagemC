#include<stdio.h>
#include<conio.h>

int main ()
{
	int a[10], b[10], o, m;
	printf ("Entre com 9 numeros:\n");
	for (o=0; o<10; o++)
	{
	scanf ("%d", &a[o]);	
	m=9-o;
	b[m]=a[o];
	}
	printf ("\n os valores invertidos:\n");
	for (m=0; m<10; m++)
	{
		printf ("%d \n", b[m]);
	}
	getch ();
	return 0;
}
