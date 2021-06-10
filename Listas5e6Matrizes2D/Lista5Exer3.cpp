#include<stdio.h>
#include<conio.h>

int main()
{
	int a[15], b[15], i, j, x; 
	int fat, c;
	//leitura//
	for (i=0; i<=14; i++)
	{
		printf ("\n Entre com o %do. elemento:\n", i+1);
		fflush(stdin); scanf("%d", &a[i]);
	}
	//fatorial//
	for (i=0; i<=14; i++)
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
	//ordenação//
	for (i=0;i<=13;i++)
    for (j=i+1; j<=14; j++)
    {
        if (b[i] > b[j])
        {
        x=b[i];
        b[i]=b[j];
        b[j]=x;    
                      }
    }
    //impressão//
    printf ("\n \n Seus fatoriais em ordem crescente \n \n");
    for (i=0; i<=14; i++)
    printf (" %d\n", b[i]);
	getch();
}
