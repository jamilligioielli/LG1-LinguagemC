#include<stdio.h>
#include<conio.h>

int main ()
{
	int cont, f, g;
	printf ("Entre com o numero para a tabuada: ");
	scanf ("%d", &g);
	printf ("Tabuada do %d \n", g);
	for (f=1; f<=10; ++f)
	{
	cont= (g*f);
	printf (" \t %d x %d = %d \n ", g, f, cont);
	}
	getch();
	return 0;
}
