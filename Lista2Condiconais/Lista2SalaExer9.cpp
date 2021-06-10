#include<stdio.h>
#include<conio.h>

int main()
{
	int x, h, l, s;
	printf ("Digite quatro numeros inteiros: ");
	scanf ("%d %d %d %d", &x, &h, &l, &s);
	if (((x % 4==0) && (x % 5==0)) || ((h % 4==0) && (h % 5==0)) || ((l % 4==0) && (l % 5==0)) || ((s % 4==0) && (s % 5==0)) )
	{
	if ((x % 4==0) && (x % 5==0))
	printf ("Numero divisivel por 4 e 5: %.2d \n", x); 
     if ((h % 4==0) && (h % 5==0))
	printf ("Numero divisivel por 4 e 5: %.2d \n", h);
	if ((l % 4==0) && (l % 5==0))
	printf ("Numero divisivel por 4 e 5: %.2d \n", l);
	if ((s % 4==0) && (s % 5==0))
	printf ("Numero divisivel por 4 e 5: %.2d \n", s);
    }
	else
	printf ("Nao foi digitado nenhum ou nenhum outro numero divisivel por 4 e 5. \n");
	
	getch();
	return 0;
	
}
