#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int h, i;
	for (h=15; h<=200; h++)
	{
		i=pow(h,2);
		printf ("%d \n", i);
	}
	
	getch() ;
	return 0;
}
