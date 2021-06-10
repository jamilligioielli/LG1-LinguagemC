#include<stdio.h>
#include<conio.h>

int main()
{
	int g;
	printf ("numeros impares entre 1 e 20: \n");
	for (g=1; g<=20; g++)
	{
	if (g%2!=0)
	printf("%d \n", g);
	}
getch();
return 0;	
}
