#include<stdio.h>
#include<conio.h>

int main()
{
	float D,R;
	printf("Digite o valor em Dolares:");
	scanf ("%f", &D);
	R=D*2.40;
	printf ("O valor em Reais eh %6.2f", R);
	
	getch();
	return 0;

}
