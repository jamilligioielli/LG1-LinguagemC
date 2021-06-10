#include<stdio.h>
#include<conio.h>

int main()
{
	int r=1;
	while (r<=20)
	{
		if (r%2==0){
		printf("%d par \n", r);
		r++;
	}
		if ((r%2!=0) && (r<21)){
		printf("%d impar \n", r);
		r++;
	}
	}
getch();
return 0;	
}
