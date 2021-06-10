#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n[40], acha, pesq, x;
	int i, j;
	char bora;
	//leitura//
	printf ("\n \n Entrada de notas de acordo com a sequência de chamada \n \n");
	for (i=0; i<=39; i++)
	{
		printf("\n Entre com a nota do aluno %d: ", i+1);
		fflush(stdin); scanf("%f", &n[i]);}
	//ordenação//
   for (i=0;i<=38;i++)
    for (j=i+1; j<=39; j++)
	  {
	  	if (n[i]>n[j])
	  	{
	  		x=n[i];
	  		n[i]=n[j];
	  		n[j]=x;
		  }}
   //pesquisa de notas//
     do{
  printf("\n \n Entre com a nota que sera pesquisada: ");
            fflush(stdin); scanf("%f", &pesq);
            i=0;
            acha=0;
            while(i<=39){
                if (pesq == n[i] && acha==0)
                    {acha=1;
                    printf ("\n nota %.2f localizada em %d", pesq, i+1);}
                else
                    i++;}
                if (acha == 0) 
                    printf ("não foi possível localizar %.2f", pesq);
                    printf (" \n \n Deseja realizar outra pesquisa? S para sim e N para não.");
                    fflush(stdin); bora=getchar();
                }while (bora == 's' || bora== 'S');
    getch();
}
