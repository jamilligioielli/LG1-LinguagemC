#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf ("O valor de N: ");
	scanf ("%i", &n);
	if (n<0){
	n=n*(-1);
	}
	printf ("O valor do modulo deste numero e: %i", n);
	
	getch ();
	return 0;
}
