#include<stdio.h>
#include<conio.h>

int main()
{
	int x=1, y=0, z, cont;
	for (cont=1; cont<=15; cont++)
	{
	printf ("%d \n", x);
	z=y;
	y=x;
	x=z+y;
	}
	getch();
	return 0;
}
