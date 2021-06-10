#include<stdio.h>
#include<conio.h>

int main()
{
	float sb,sl,ht,adi;
	printf("Digite o salario bruto: ");
	scanf ("%f", &sb);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f", &ht);
	if (ht>160)
	{
	ht=(ht-160);
	adi=((sb/160) + (ht*0.50));
	sb=(adi+sb);
    }
    if (sb<800.00)
    {
    sl=sb;
    printf ("O salario liquido e: %.2f \n", sl);
    } 
    else
    if ((sb<=800.00) && (sb<=1600.00))
    {
    sl=(sb-(sb*0.13));
    printf("O salario liquido e: %.2f \n", sl);
    }      
    else {
    sl=(sb-(sb*0.22));
    printf ("O salario liquido e: %.2f \n", sl);
    }
    getch();
    return 0;
    
}
