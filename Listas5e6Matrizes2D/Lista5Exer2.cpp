#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");    
	printf ("\n \n Ordenação e pesquisa de elementos em uma Matriz \n \n");
	int a[8], b[8], i, j, pesq, x, acha;
	//leitura//
	for (i=0; i<=7; i++){
		printf ("Entre com o %do. elemento: ", i+1);
	fflush(stdin);scanf ("%d", &a[i]);
	}
	//multiplicção//
		for (i=0; i<=7; i++)
	{
		b[i]=a[i]*5;
	}
	//ordenação//
	for (i=0;i<=6;i++)
    for (j=i+1; j<=7; j++)
	  {
	  	if (b[i]>b[j])
	  	{
	  		x=b[i];
	  		b[i]=b[j];
	  		b[j]=x;
		  }}
	//impressão//
	printf("\n Os produtos dos elementos de A*5: \n");
    for (i=0;i<=7;i++)
		  {
		  	printf (" \n %d ", b[i]);
		  }
	//pesquisa//
	printf("\n \n Entre com o numero que será pesquisado:");
            fflush(stdin); scanf("%d", &pesq);
            i=0;
            acha=0;
            while(i<=7){
                if (pesq == b[i]&& acha==0)
                    {acha=1;
                    printf ("%d localizado na %d posição", pesq, i+1);}
                else
                    i++;}
                if (acha == 0) 
                    printf ("não foi possível localizar %d", pesq);
    
	getch();                
}
