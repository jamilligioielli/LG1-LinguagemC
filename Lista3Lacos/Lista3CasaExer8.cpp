#include<stdio.h>
#include<conio.h>

int main()
{
	int m=1;
	printf("Numeros pares de 1 a 20: \n");
	do{
	if (m %2==0)
	printf("%d \n", m);
	m++;
    }
	while (m<=20);
	
getch();
return 0;	
}
