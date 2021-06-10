#include<stdio.h>
#include<conio.h>

int main()
{
	float IMC, M, H;
	printf ("Digite a massa (kg):");
	scanf ("%f", &M);
	printf ("Digite a alutura (m):");
	scanf ("%f", &H);
	IMC= M/(H*H);
	printf("O IMC resultante eh: %.2f", IMC);
	
	
	
	getch();
	return 0;

}
