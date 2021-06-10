#include<stdio.h>
#include<conio.h>

int main()
{
	int x, soma;
	soma=0;
	for (x=1; x<=100; x++)
	{
	soma=soma+x;
	printf("%d \n", soma);
	}
	getch();
	return 0;
}
