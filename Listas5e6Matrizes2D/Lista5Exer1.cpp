#include<stdio.h>
#include<conio.h>

int main()
{
	int x[12], j, i, a;
	for (i=0; i<=11; i++){
		printf ("Entre com o %do. elemento: ", i+1);
		scanf ("%d", &x[i]);
	}
	//ordenação//
	for (j=0; j<=10; j++)
	  for (i=11; i>=j+1; i--)
	  {
	  	if (x[i]<x[j])
	  	{
	  		a=x[i];
	  		x[i]=x[j];
	  		x[j]=a;
		  }}
	//impressão//
	
		  for (i=11;i>=0;i--)
		  {
		  	printf (" \n %d ", x[i]);
		  }
	  getch();
	  return 0;
}
