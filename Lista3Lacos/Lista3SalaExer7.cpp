#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x, y=1, c=3;
	x=0;
	while (x<=15)
	{
	printf("%d \n", y);
	x++;
	y=pow (c,x);
	}
	getch ();
	return 0;
}
