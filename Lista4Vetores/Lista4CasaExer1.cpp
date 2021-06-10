#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int j, rav[9], rac[9];
    printf ("Digite o RA do virus (deixe espaço entre os números):\n ");
	for (j=0; j<9; ++j)
	{
		scanf ("%d", &rav[j]);
	}
	for (j=0; j<9;++j)
	{
	rac[0]=rav[0];
	rac[1]=rav[1];
	rac[2]=rav[7];
	rac[3]=rav[6];
	rac[4]=rav[4];
	rac[5]=rav[5];
	rac[6]=rav[2];
	rac[7]=rav[3];
	rac[8]=rav[8];
    }   
    printf (" \n \n Novo RA: \n \n");
	for (j=0; j<9; j++)
	{
		printf (" %d ", rac[j]);
	}
	getch();
	return 0;
}



