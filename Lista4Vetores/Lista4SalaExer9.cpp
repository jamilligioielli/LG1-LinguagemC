#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int c;
	printf ("Entre com o código de acesso de seu curso: ");
	scanf ("%d", &c);
	switch (c)
	{
		case 1: printf ("\n Engenharia"); break;
		case 2: printf ("\n Edificações"); break;
		case 3: printf ("\n Sistemas Elétricos"); break;
		case 4: printf ("\n Turismo"); break;
		case 5: printf ("\n Análise de Sistemas"); break;
		default: printf("\n Código inválido");
	}
	getch ();
	return 0;
}
