#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[20], b[22], i, pesq, x, acha;
	//leitura de A//
	printf (" \n Vetor A \n ");
	for (i=0;i<=19; i++)
	{
		printf("\n Entre com o %d.o elemento: ", i+1);
		fflush(stdin); scanf("%d", &a[i]);
	}
	//B recebe os 20 elementos de A//
	for (i=0;i<=19; i++)
	{
		b[i]=a[i];
	}
	//B recebe os outros 2 elementos//
	printf ("\n Por favor, digite mais dois elementos. \n");
	for (i=0;i<=1; i++)
	{
		printf("\n Entre com o %d.o elemento: ", i+1);
		fflush(stdin); scanf("%d", &b[i-19]);
	}
	//pesquisa dos elementos em B//
	printf ("\n \n Pesquisa de elementos \n");
	printf("\n \n Entre com o numero que será pesquisado: ");
            fflush(stdin); scanf("%d", &pesq);
            i=0;
            acha=0;
            while(i<=21){
                if (pesq == b[i]&& acha==0)
                    {acha=1;
                    printf ("\n %d localizado na posição %d", pesq, i+1);}
                else
                    i++;}
                if (acha == 0) 
                    printf ("não foi possível localizar %d", pesq);
    getch();
}
