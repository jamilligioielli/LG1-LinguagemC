#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, c;
	printf ("Digite tres numeros: ");
	scanf ("%d %d %d", &a, &b, &c);
	if (a<b && a<c && b<c)
	printf ("Os valores em ordem crescente sao: %d, %d, %d", a, b , c);
	else if(a<b && a<c && c<b)
	printf ("Os valores em ordem crescente sao: %d, %d, %d", a, c, b);
	else if (b<a && b<c && c<a)
	printf ("Os valores em ordem crescente sao: %d, %d, %d", b, a , c);
	else if (b<a && b<c && c<a)
	printf ("Os valores em ordem crescente sao: %d, %d, %d", b, c, a);
	else if (c<a && c<b && a<b)
	printf ("Os valores em ordem crescente sao: %d, %d, %d", c, a , b);
	else 
	printf ("Os valores em ordem crescente sao: %d, %d, %d", c, b, a);
	
		
		getch ();
		return 0;
	
}
