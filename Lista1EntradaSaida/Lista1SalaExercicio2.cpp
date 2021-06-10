#include<stdio.h>
#include<conio.h>

int main()
{
	float C,F;
	printf("Entre com a temperatura:");
	scanf ("%f", &F);
	C=((F-32)*5/9);
	printf("O valor da temperatura em Celsius eh: %6.2f", C);
	
	getch();
	return 0;
}
