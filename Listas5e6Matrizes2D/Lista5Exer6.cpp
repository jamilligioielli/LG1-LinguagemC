#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[30], b[30], i, pesq, x, acha;
	//leitura de A//
	printf ("\n \n Matriz A \n \n");
	for (i=0; i<=29; i++){
		printf ("\n Entre com o %d.o elemento: ", i+1);
		fflush(stdin); scanf("%d", &a[i]);
	}
	//cubo de A//
	for(i=0; i<=29; i++)
	{
		b[i]=pow (a[i], 3);
	}
	//impressão//
	printf ("\n \n Elementos elevados ao cubo \n \n");
    for (i=0;i<=29;i++)
		  {
		  	printf (" %d ", b[i]);
		  }
	//pesquisa dos elementos de B//
	printf("\n \n Entre com o numero que será pesquisado: ");
            fflush(stdin); scanf("%d", &pesq);
            i=0;
            acha=0;
            while(i<=29){
                if (pesq == b[i]&& acha==0)
                    {acha=1;
                    printf ("\n %d localizado na posição %d", pesq, i+1);}
                else
                    i++;}
                if (acha == 0) 
                    printf ("não foi possível localizar %d", pesq);
    getch();
}
