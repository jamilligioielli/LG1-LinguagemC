#include<stdio.h>
#include<conio.h>

int main ()
{
	int x;
	printf ("Digite um numero inteiro:  ");
	scanf ("%d", &x);
	if (x % 2==0)
	printf ("O numero digitado e par. ");
	else
	if (x % 2==1)
	printf ("O numero digitado e impar. ");
	
	getch();
	return 0;
}
