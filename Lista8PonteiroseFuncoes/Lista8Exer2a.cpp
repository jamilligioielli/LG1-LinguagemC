//soma dos primeiros int <n - por valor//
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int calculo(int g, int h);
int i, n, soma;

int calculo(int g, int h){
	
	setlocale(LC_ALL, "Portuguese");
	printf ("\nEntre com o n�mero de inteiros para somat�ria:\n");
	scanf("%d", &g);
	h=0;
	for (i=1;i<=g;i++){
		h=h+i;
	}
	printf ("\n\n\tA somat�ria dos %d primeiros inteiros = %d\n", g, h);
	return(h);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n\t C�lculo de Somat�ria\n");
	int r;
	char on;
	on='s';
	while(on=='s'||on=='S'){
	r=calculo(n, soma);
	printf ("\n\nDeseja calcular novamente? [S]IM / [N]AO + <enter>\n");
    fflush(stdin); on=getchar();}
	getch();
	return 0;
}
