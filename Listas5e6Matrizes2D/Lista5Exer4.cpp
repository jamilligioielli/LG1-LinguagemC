#include<stdio.h>
#include<conio.h>
//Leitura, Soma e Ordenação de vetores//
int main()
{
	int a[12], b[12], c[12], i, j, x;
	//Leitura de A//
	printf ("\n \n Para a Matriz A\n \n");
	for (i=0; i<=11; i++)
	{
		printf (" \n Digite o %do. elemento: ", i+1);
		fflush(stdin); scanf ("%d", &a[i]);
	}
	//ordenação de A//
    for (i=0;i<=10;i++)
     for (j=i+1; j<=11; j++)
    {
        if (a[i]>a[j])
        {
        x=a[i];
        a[i]=a[j];
        a[j]=x;}
    } 
	//Leitura de B//
	printf ("\n \n Para a Matriz B\n \n");
	for (i=0; i<=11; i++)
	{
		printf (" \n Digite o %do. elemento: ", i+1);
		fflush(stdin); scanf ("%d", &b[i]);
	}
	//ordenação de B//
    for (i=0;i<=10;i++)
     for (j=i+1; j<=11; j++)
    {
        if (b[i]>b[j])
        {
        x=b[i];
        b[i]=b[j];
        b[j]=x;}
    } 
    //soma dos elementos (A com B em C)//
		for (i=0; i<=11; i++)
	{
		c[i]=a[i]+b[i];
	}
	//ordenação de C//
	for (i=0;i<=10;i++)
     for (j=i+1; j<=11; j++)
    {
        if (c[i]>c[j])
        {
        x=c[i];
        c[i]=c[j];
        c[j]=x;}
    } 
    //exibindo C//
    printf ("\n \n Estas sao suas somas (matriz C) \n \n ");
	for (i=0; i<=11; i++)
	{
		printf ("  %d  ", c[i]);
	}
	
	getch();
}
