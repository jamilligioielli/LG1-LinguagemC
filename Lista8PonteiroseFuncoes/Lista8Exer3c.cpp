 //prestação em atraso - por referência//
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int calculo (float *f, float *g, int *t);

int calculo (float *f, float *g, int *t){
	setlocale(LC_ALL, "Portuguese");
	float h;
	h=*f+(*f*(*g/100)*(*t));
	printf ("\n Valor final: %.2f\n", h);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float prest, valor, taxa, *f, *g;
    int tempo, *t;
    char op;
	printf ("\n\n\t Cálculo de prestação em atraso\n");
	op='s';
	while (op=='S'|| op=='s'){
	printf ("\nDigite o valor da prestação:\n");
	scanf("%f", &valor);
	f=&valor;
	printf("\nDigite a taxa de juros:\n");
	scanf("%f", &taxa);
	g=&taxa;
	printf("\nDigite com os dias em atraso:\n");
	scanf("%d", &tempo);
	t=&tempo;
	prest=calculo(f, g, t);
	printf ("\n\nDeseja calcular novamente? S=sim / N=não + enter\n");
    fflush(stdin); op=getchar();
}
	getch();
	return 0;
}
