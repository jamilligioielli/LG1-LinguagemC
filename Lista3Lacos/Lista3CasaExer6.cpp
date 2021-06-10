#include<stdio.h>
#include<conio.h>

int main()
{
	int s;
	for (s=20; s>=1; s--)
	{
		if (s%2==0){
		printf("%d par \n", s);
	}
		if (s%2!=0){
		printf("%d impar \n", s);
	}
	}
	
getch();
return 0;	
}
