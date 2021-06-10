#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, n4, media;
	printf ("Digite a nota do primeiro bimestre: \n");
	scanf("%f", &n1);
	printf("Digite a nota do segundo bimestre: \n");
	scanf("%f", &n2);
	printf("Digite a nota do terceiro bimestre: \n");
	scanf("%f", &n3);
	printf("Digite a nota do quarto bimestre: \n");
	scanf("%f", &n4);
	media=(n1+n2+n3+n4)/4;
	printf("A media final e: %.2f \n", media);
	
	getch();
	return 0; 
}
