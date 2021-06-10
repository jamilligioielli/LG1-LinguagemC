#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	a=20;
	printf("Numeros pares entre 20 e 1: \n");
	while (a>=1)
	{
		if (a %2==0)
		printf("%d \n", a);
		a--;
	}
getch();
return 0;	
}
