#include <stdio.h>
#include <conio.h>

int main()
{
	float D,R;
	printf("Digite o valor em Reais:");
	scanf ("%f", &R);
	D=R/2.40;
	printf ("O valor em dolares eh %6.2f", D);
	
	getch();
	return 0;

}
