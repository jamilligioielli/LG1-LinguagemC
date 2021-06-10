//prestação em atraso - por valor//
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int calculo (float f, float g, int t);
float valor, taxa;
int tempo;
char op;

int calculo (float f, float g, int t){
	setlocale(LC_ALL, "Portuguese");
	float h;
	op='s';
	while (op=='S'|| op=='s'){
	printf ("\nDigite o valor da prestação:\n");
	scanf("%f", &f);
	printf("\nDigite a taxa de juros\n");
	scanf("%f", &g);
	printf("\nDigite com os dias em atraso:\n");
	scanf("%d", &t);
	h=f+(f*(g/100)*t);
	printf ("\n Valor final: %.2f\n", h);
	printf ("\n\nDeseja calcular novamente? [S]IM / [N]AO + <enter>\n");
    fflush(stdin); op=getchar();
}
	return (h);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float prest;
	printf ("\n\n\t Cálculo de prestação em atraso\n");
	prest=calculo(valor, taxa, tempo);
	getch();
	return 0;
}
