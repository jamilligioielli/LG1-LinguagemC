#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float a, b, c, x1, x2, delta;
	printf ("Equacao de segundo grau. \n");
	printf ("Digite o coeficiente A: ");
	scanf ("%f", &a);
	printf ("Digite o coeficiente B: ");
	scanf ("%f", &b);
	printf ("Digite o coeficiente C: ");
	scanf ("%f", &c);
	if (a!=0)
	{
		delta=(pow(b,2))-(4*a*c);
		if (delta<0)
		printf ("A equacao nao tem solucao");
		else if (delta==0)
		{
		x1=(-b/2*a);
		x2=x1;
		printf("A equacao tem duas raizes reais e iguais: %f, %f", x1, x2);
	    }
		else
		{ 
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf ("A equacao tem duas raizes reais e diferentes: %.2f, %.2f", x1, x2);	
		}			
	}
	
	getch();
	return 0;
}
