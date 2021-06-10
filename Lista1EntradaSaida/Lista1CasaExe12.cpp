#include<stdio.h>
#include<conio.h>

int main()
{
	float vm, t, s, tinicial, tfinal, sinicial, sfinal;
	printf ("Digite o espaco inicial do corpo: ");
	scanf ("%f", &sinicial);
	printf ("Digite o espaco final do corpo: ");
	scanf ("%f", &sfinal);
	printf ("Digite o tempo inicial do corpo: ");
	scanf("%f", &tinicial);
	printf ("Digite o tempo final do corpo: ");
	scanf ("%f", &tfinal);
	t= tfinal-tinicial;
	s=sfinal-sinicial;
	vm= s/t;
	printf("A velocidade media sera: %.2f \n ", vm);
	
	
	getch();
	return 0; 
}
