#include<stdio.h>
#include<conio.h>

int main(){
	float A, B, C;
	printf ("O valor A:");
	scanf ("%f", &A);
	printf ("O valor B:");
	scanf ("%f", &B);
	C=A;
	A=B;
	B=C;
	printf("O valor de A eh: %6.2f", A);
	printf("O valor de B eh: %6.2f", B);
	
	getch();
	return 0;
	
}
