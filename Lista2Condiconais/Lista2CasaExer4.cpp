#include<stdio.h>
#include<conio.h>

int main()
{
	float a,b,c;
	printf ("Digite tres numeros diferentes:  ");
	scanf ("%f %f %f", &a, &b, &c);
	if ((a>b) && (a>c) && (b>c))
	printf ("O valor maior, o menor e o do meio sao respectivamente: %.2f %.2f %.2f  \n", a, c, b);
	else
	if ((a>b) && (a>c) && (c>b))
	printf ("O valor maior, o menor e o do meio sao respectivamente: %.2f %.2f %.2f  \n", a, b, c);
	else
	if ((b>a) && (b>c) && (c>a))
	printf ("O valor maior, o menor e o do meio sao respectivamente: %.2f %.2f %.2f  \n", b, c, a);
	else
	if ((b>a) && (b>c) && (c>a))
	printf ("O valor maior, o menor e o do meio sao respectivamente: %.2f %.2f %.2f  \n", b, a, c);
	else
	if ((b>a) && (c>b) && (c>a))
	printf ("O valor maior, o menor e o do meio sao respectivamente: %.2f %.2f %.2f  \n", c, b, a);
	else
	printf ("O valor maior, o menor e o do meio sao respectivamente: %.2f %.2f %.2f  \n", c, a, b);
	
	getch ();
	return 0;
}
