#include<stdio.h>
#include<conio.h>

int main()
{
	int NC;
	float C;
	printf ("Digite a quantidade de coelhos:");
	scanf ("%d", &NC, "%f", &C);	
	C=(NC*0.70)/18+10;
	printf ("Com: %d, O valor do Custo sera de: %6.2f", NC, C);
	
	getch();
	return 0;

}
