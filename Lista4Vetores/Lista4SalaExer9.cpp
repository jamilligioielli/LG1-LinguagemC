#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int c;
	printf ("Entre com o c�digo de acesso de seu curso: ");
	scanf ("%d", &c);
	switch (c)
	{
		case 1: printf ("\n Engenharia"); break;
		case 2: printf ("\n Edifica��es"); break;
		case 3: printf ("\n Sistemas El�tricos"); break;
		case 4: printf ("\n Turismo"); break;
		case 5: printf ("\n An�lise de Sistemas"); break;
		default: printf("\n C�digo inv�lido");
	}
	getch ();
	return 0;
}
