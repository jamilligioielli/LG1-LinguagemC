#include<stdio.h>
#include<conio.h>

int main()
{
	float H, R, V;
	printf ("Digite a altura da lata:");
	scanf ("%f", &H);
	printf ("Digite o raio da lata:");
	scanf ("%f",&R);
	V=3.14159*R*R*H;
	printf ("O volume da lata eh: %6.2f",V);
	
	getch ();
	return 0;
	
}
