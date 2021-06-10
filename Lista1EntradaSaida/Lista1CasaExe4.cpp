#include<stdio.h>
#include<conio.h>

int main()
{
	float A, P, a, b;
	printf ("Digite a:");
	scanf ("%f", &a);
	printf ("Digite b:");
	scanf ("%f", &b);
	A=a*b;
	printf("Area do retangulo: %.2f", A);
	
	P=(2*a)+(2*b);
	printf("Perimetro do retangulo: %.2f", P);
	
	
	getch();
	return 0;

}
