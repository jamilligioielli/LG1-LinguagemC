#include<stdio.h>
#include<conio.h>

int main()
{
	float PA, PV, TAX, TEMP;
	printf ("Digite O Valor da Prestacao:");
	scanf ("%f", &PV);
	printf("Digite o valor da taxa de juros:");
	scanf("%f", &TAX);
	printf ("Digite o tempo em atraso:");
	scanf ("%f", &TEMP);
	PA=PV+(PV*(TAX/100)*TEMP);
	printf ("O valor da prestacao em atraso eh: %6.2f", PA);
	
	getch();
	return 0;

}
