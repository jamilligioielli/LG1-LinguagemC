#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int a[8], b[8], i, c;
	for (i=0; i<8; i++)
	{
		printf ("Insira o valor da matriz A: ");
		scanf ("%d", &a[i]);
	}
	for (i=0; i<8; i++)
	{
		b[i]= pow(a[i], 2);
	}
	for (i=0; i<8; i++)
	{
		printf ("O quadrado é: %d \n", b[i]);
	}
	getch ();
	return 0;
}
