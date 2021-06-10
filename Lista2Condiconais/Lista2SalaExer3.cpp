#include<stdio.h>
#include<conio.h>

int main()
{
	int x, y, z;
	printf ("Digite dois valores numericos:  ");
	scanf ("%d", &x);
	scanf ("%d", &y);
	if (x==y)
	printf ("Os valores sao iguais, nao ha diferenca entre eles");
	else{
	if (x>y)
	z=x-y;
	else (y>x);
	z= y-x;
	printf ("A diferenca entre os numeros sera: %.2d", z);
    }
	getch ();
	return 0;
}
