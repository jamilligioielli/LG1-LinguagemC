#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int b, ra[9], raa[9];
    printf ("Por favor, entre com os digitos de seu RA (deixe espaço entre os números):\n");
	for (b=0; b<9; ++b)
	{
		scanf ("%d", &ra[b]);
	}
	for (b=0; b<9;++b)
	{
	raa[0]=ra[1];
	raa[1]=ra[0];
	raa[2]=ra[2];
	raa[3]=ra[3];
	raa[4]=ra[4];
	raa[5]=ra[5];
	raa[6]=ra[6];
	raa[7]=ra[8];
	raa[8]=ra[7];
    }   
    printf (" \n \n Seu novo RA: \n \n");
	for (b=0; b<9; ++b)
	{
		printf (" %d ", raa[b]);
	}
	getch();
	return 0;
}


