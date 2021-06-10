#include<stdio.h>
#include<conio.h>

int main ()
{
	int tab, a, b;
	printf ("Entre com o numero da tabuada: \n");
	scanf ("%d", &b);
	for (a=1; a<=10; ++a)
	{
	tab= (b*a);
	printf ("\n %d x %d = %d \n", b, a, tab);
	}
	getch();
	return 0;
}
