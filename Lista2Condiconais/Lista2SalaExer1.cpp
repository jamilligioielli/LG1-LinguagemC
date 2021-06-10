#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, media;
	printf ("Digite a nota um:");
	scanf ("%f", &n1);
	printf ("Digite a nota dois:");
	scanf ("%f", &n2);
	printf ("Digite a nota tres:");
	scanf ("%f", &n3);
	media = (n1 +n2 + n3)/3;
	if (media>=6.0)
	printf ("Aluno aprovado com media: %.2f \n", media);
	else 
	printf ("Aluno reprovado com media: %.2f \n", media);
	
	getch ();
	return 0;
	
}
