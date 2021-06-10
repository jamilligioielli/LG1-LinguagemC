#include<stdio.h>
#include<conio.h>

int main()
{
	float a, s, t, s0, v0;
	s0 = 2.0;
	v0 = 2.0;
	a= 10.0;
	printf ("Digite o Tempo (segundos): ");
	scanf("%f", &t);
	s=(s0+v0)*t+ ((1/2)*a*(t*t));
	printf("O valor do movimento uniforme variado e: %.2f \n", s);
	
	
	getch();
	return 0; 
}
