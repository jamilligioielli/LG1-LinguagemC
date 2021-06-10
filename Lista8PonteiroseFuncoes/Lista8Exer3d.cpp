//potenciação - por referência//
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int calculopot(float *d, float *e);
int i;

int calculopot(float *d, float *e){
	setlocale(LC_ALL, "Portuguese");
	float p;
	if (*e == 0) {
	p=1;
	} else {
	if (*e< 0) {
	*d=1 / *d;
	*e=-(*e);
	}
	i=1;
	p=*d;
	while (i<*e){
		p=pow(*d, *e);
		i++;
	}
}
	printf("\nPotência = %.2f\n", p);}

int main(){
	setlocale(LC_ALL, "Portuguese");
	char op;
	float ba, ex, pot, *d, *e;
	op='s';
	while (op=='S'|| op=='s'){
	printf("\n\n\tPotenciação de Números\n");
	printf ("\nInsira a base:\n");
	scanf ("%f", &ba);
	d=&ba;
	printf ("Insira o expoente:\n");
	scanf ("%f", &ex);
	e=&ex;
	pot=calculopot(d, e);
	printf ("\n\nDeseja calcular novamente? (S=sim / N=não + enter)\n");
    fflush(stdin); op=getchar();
	system ("cls");}
    return 0;
}



