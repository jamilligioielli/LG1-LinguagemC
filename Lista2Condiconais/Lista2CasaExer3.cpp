
#include<stdio.h>
#include<conio.h>

int main()
{
	float nota, resultado;
	int nota2,resto;
	
	printf ("Entre com a nota: ");
	scanf ("%f", &nota);
	
	nota2=nota*100;
	resto=nota2%100;
	resultado =resto;
	if (resto>50){
		nota=(nota-(resultado/100)+1);
	}
	
	else
	nota = (nota-(resultado/100));
	
	printf ("A nota arredondada sera: %.2f \n", nota);
	
	getch ();
	return 0;
	
}
