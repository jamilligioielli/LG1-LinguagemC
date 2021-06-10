#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i, j, x;
	//leitura de A//
	printf ("\n \n Para a Matriz A\n \n");
	for (i=0; i<=19; i++)
	{
		printf ("\n Entre com o %do. elemento:\n", i+1);
		fflush (stdin); scanf ("%d", &a[i]);
	}
	//Leitura de B//
	printf ("\n \n Para a Matriz B\n \n");
	for (i=0; i<=29; i++)
	{
		printf ("\n Entre com o %do. elemento:\n", i+1);
	    fflush (stdin);	scanf ("%d", &b[i]);
	}
	//junção//
	for (i=0; i<=49; i++)
	{
		if (i<=19)
		c[i]=a[i];
		else
		c[i]=b[i-20];
	}
	//ordenação de C//
	for (j=0; j<=48; j++)
	  for (i=49; i>=j+1; i--)
	  {
	  	if (c[i]<c[j])
	  	{
	  		x=c[i];
	  		c[i]=c[j];
	  		c[j]=x;
		  }}
	//impressão//
	printf ("\n \n Matriz C \n \n ");
		  for (i=49;i>=0;--i)
		  {
		  	printf ("  %d  ", c[i]);
		  }
	  getch();
	  return 0;
}
