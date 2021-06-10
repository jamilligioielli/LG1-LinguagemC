#include<stdio.h>
#include<conio.h>

int main ()
{
	int ni, nc, r;
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &ni);
	nc=-20;
	if (ni>=0 && ni <=100)
	{
	r=nc-ni;
	if (r<0)
	r=r*(-1);
	printf ("A distancia entre numero digitado e o numero chave e: %d", r);
    }
    else
	printf ("Fora do intervalo. \n");
	
	getch();
	return 0;
}
