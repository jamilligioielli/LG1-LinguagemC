#include<stdio.h>
#include<conio.h>

int main()
{
	int n, multi, x=3;
	printf ("Entre com um numero menor ou igual a 50:\n ");
	scanf ("%d", &n);
	if (n<=50){
	while (multi<=250)
	{ multi=n*x;
	printf ("%d \n", multi);
	x*=3;
	}
	}
	else
	printf ("numero invalido");
	getch ();
	return 0;
}
