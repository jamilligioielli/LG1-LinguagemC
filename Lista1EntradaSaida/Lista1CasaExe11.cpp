#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	printf ("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Novo valor de A: %d \n", a);
	printf("Novo valor de B: %d \n", b);
	
	getch();
	return 0; 
}
