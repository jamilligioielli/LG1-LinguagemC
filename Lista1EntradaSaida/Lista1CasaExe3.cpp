#include<stdio.h>
#include<conio.h>

int main()
{
	float AP, LP, AA, LA, Quant;
	printf("Digite a largura do azulejo (cm):");
	scanf ("%f", &LA);
	printf ("Digite a altura do azulejo (cm):");
	scanf("%f", &AA);
	printf("Digite a largura da parede (m)");
	scanf("%f", &LP);
	printf ("Digite a altura da parede (m)");
	scanf("%f", &AP);
	LA=LA/100;
	AA=AA/100;
	Quant= (AP*LP)/(AA*LA);
	printf ("A quatidade de azulejos necessaria eh: %6.2f", Quant);
	
	getch();
	return 0;

}
