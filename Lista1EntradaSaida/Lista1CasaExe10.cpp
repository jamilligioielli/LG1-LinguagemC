#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, c;
	printf ("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("Novo valor de A: %d \n", a);
	printf("Novo valor de B: %d \n", b);
	
	getch();
	return 0; 
}
