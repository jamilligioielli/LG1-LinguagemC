 //soma dos primeiros int <n - por refer�ncia//
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int calculo(int *g);
int i,n, h;

int calculo(int *g){
	setlocale(LC_ALL, "Portuguese");
	for (i=1;i<=*g;i++){
		h=h+i;
	}
	printf ("\n\n\tA somat�ria dos %d primeiros inteiros = %d\n", n, h);
	h=0;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n\t C�lculo de Somat�ria\n");
	int *r;
	char on;
	on='s';
	while(on=='s'||on=='S'){
	printf ("\nEntre com o n�mero de inteiros para somat�ria:\n");
	fflush(stdin);scanf("%d", &n);
	r=&n;
	calculo(r);
	printf ("\n\nDeseja calcular novamente? (S-sim ou  N + enter - n�o)\n");
    fflush(stdin); on=getchar();}
	getch();
	return 0;
}
