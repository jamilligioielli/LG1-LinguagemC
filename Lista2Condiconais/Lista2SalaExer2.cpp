#include<stdio.h>
#include<conio.h>

int main ()
{
	float n1, n2, media, exame, media2;
	printf ("Digite a 1a nota: ");
	scanf ("%f", &n1);
	printf ("Digite a 2a nota: ");
	scanf ("%f", &n2);
	media=(n1+n2)/2;
	if (media>=6.0)
	printf ("Aluno aprovado com media: %.2f \n", media);
	else
	printf ("Digite a nota de exame: ");
	scanf ("%f", &exame);
	media2= (exame+media);
	if (media2>=5)
	printf ("Aluno aprovado em exame com media: %.2f \n", media2);
	else
	printf ("Aluno reprovado com media: %.2f \n", media2);
	
	getch ();
	return 0;

}
