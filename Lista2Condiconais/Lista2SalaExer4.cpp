#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, c;
	printf ("Digite 3 valores para os lados de um triangulo: ");
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	
	if (a<b+c && b<a+c && c<a+b)
	{
		if (a==b && b==c)
		printf ("Estes valores formam um triangulo equilatero");
		else
		if (a==b || a==c || b==c)
		printf ("Estes valores formam um triangulo isosceles");
		else
		if (a!=b && b!=c)
		printf ("Estes valores formam um triangulo escaleno");
	}
		else 
		printf ("Estes valores nao formam um triangulo");
		
		getch ();
		return 0;
	
}
