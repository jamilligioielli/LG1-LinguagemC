#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6], b[6],c, i;
    int fat;
	for (i=0; i<6; i++)
	{
		printf("Entre com um numero: ");
		scanf ("%d", &a[i]);
	}
	for (i=0; i<6; i++)
	{
	fat=1;
	c=a[i];
      while(c>1)
      {
       fat*=c;
	c--;
	  }
	b[i]=fat;
	}
	for (i=0; i<6; i++)
	{
	printf (" Seu fatorial eh: %d \n", b[i]);
	}
	getch();
	return 0;
}
