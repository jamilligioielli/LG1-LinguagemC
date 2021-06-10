#include<stdio.h>
#include<conio.h>

int main()
{
	int cont, soma;
	soma=0;
	for(cont=1; cont<=500; ++cont)
	{
	if (cont%2== 0){
	printf ("+ %d =\n \t", cont);
	soma=soma+cont;
	printf("%d\t \n",soma);}
	
}
	getch();
	return 0;
}
