#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[5], b[5], i;
	for (i=0; i<5; i++)
	{
		printf("Digite os valores para a multiplicação: \n");
		scanf ("%d", &a[i]);
	}
	for (i=0; i<5; i++)
	{
		b[i]=a[i]*3;
	}
	for (i=0; i<5; i++){
		printf ("\n O produto é: %d \n", b[i]);
	}
	getch ();
	return 0;
}
