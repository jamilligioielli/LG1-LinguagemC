#include<stdio.h>
#include<conio.h>

int main()
{
	int A[5][3], B[5][3], C[5][3], i,j;
	for (i=0; i<=4; i++)
	for (j=0; j<=2; j++){
	 printf ("Entre com os valores de A:");
	 scanf ("%d", &A[i][j]);
	 printf ("Entre com os valores de B:");
	 scanf ("%d", &B[i][j]);
	 C[i][j]=A[i][j] + B[i][j];
	}
	for (i=0; i<=4; i++)
	for (j=0; j<=2; j++){
		printf(" \n O valor de C eh: %d", C[i][j]);
	}
	getch();
	return 0;
    }
    
    

