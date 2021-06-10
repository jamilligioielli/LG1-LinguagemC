#include<stdio.h>
#include<conio.h>

int main()
{
	float area, comp, raio;
	printf ("Digite o raio:");
	scanf ("%f", &raio);
	area=3.1416*(raio*raio);
	printf ("A area do circulo eh: %.2f \n", area);
	comp=2*3.1416*raio;
	printf ("O comprimento do circulo eh: %.2f \n", comp);
	
	getch ();
	return 0;
}
