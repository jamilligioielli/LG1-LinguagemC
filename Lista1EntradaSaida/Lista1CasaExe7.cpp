#include<stdio.h>
#include<conio.h>

int main()
{
	float volume, area, raio;
	printf("Digite o raio:");
	scanf("%f", &raio);
	volume= (4*3.1416*(raio*raio*raio))/3;
	area=4*3.1416*(raio*raio);
	printf("O volume da esfera eh: %.2f \n", volume);
	printf("A area da esfera eh: %.2f \n", area);
	
	getch();
	return 0;
}
