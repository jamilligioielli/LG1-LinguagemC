#include<stdio.h>
#include<conio.h>

int main()
{
	int k=1;
	do{
		if (k%2==0){
		printf("%d, par \n", k);
		k++;
	}
		if ((k%2!=0) && (k<21)){
		printf("%d, impar \n", k);
		k++;
	}
	}
	while (k<=20);
	
getch();
return 0;	
}
