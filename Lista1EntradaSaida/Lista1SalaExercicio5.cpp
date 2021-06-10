#include<stdio.h>
#include<conio.h>

int main()
{
	int Numero;
	float Quadrado;
	printf ("Digite um numero inteiro:");
	scanf ("%d", &Numero);
	Quadrado=Numero*Numero;
	printf("O Quadrado deste numero e: %6.2f", Quadrado);
	
	getch();
	return 0;

}
