#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[10],b[10][3], i, j, c, fat;
	printf ("\n Insira o valor da matriz A(10 elementos): \n ");
	for (i=0;i<10;i++){
		scanf ("%d", &a[i]);
	}
	for(i=0; i<=10; i++)
	  for (j=0; j<=2; j++){
	  	if (j<3){
		  b[i][j]= pow(a[i],2);
	  	}
	  	if (j<2){
	  	//fatorial//
	fat=1;
	c=a[i];
      while(c>1)
      {
       fat*=c;
	c--;
	  }
	b[i][j]=fat;}
    if(j<1){
    	b[i][j]=a[i] +5;
    }
	}
	  	for(i=0; i<=9; i++)
	  for (j=0; j<=2; j++){
	  	printf ("\n %d", b[i][j]);
	  }
	getch();
	return 0;
}
