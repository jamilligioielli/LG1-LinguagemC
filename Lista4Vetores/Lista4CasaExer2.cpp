#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int j, ral[9], ran[9];
	printf ("Por favor, digite o RA original (deixe espaço entre os números):\n ");
	for (j=0; j<9; ++j)
	{
		scanf ("%d", &ral[j]);
	}
	for (j=0; j<9;++j)
	{
	ran[0]=ral[0];
	ran[1]=ral[1];
	ran[2]=ral[2];
	ran[3]=ral[3];
	ran[4]=ral[4];
	ran[5]=ral[8];
	ran[6]=ral[7];
	ran[7]=ral[6];
	ran[8]=ral[5];
    }   
    printf (" \n \n Novo RA: \n \n");
	for (j=0; j<9; ++j)
	{
		printf (" %d ", ran[j]);
	}
	getch();
	return 0;
}



