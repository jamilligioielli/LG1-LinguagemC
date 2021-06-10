#include<stdio.h>
#include<conio.h>

int main()
{
	int n1, n2, n3, n4;
	printf ("Digite quatro numeros inteiros: ");
	scanf ("%d %d %d %d", &n1, &n2, &n3, &n4);
	if (((n1 % 2==0) && (n1 % 3==0)) || ((n2 % 2==0) && (n2 % 3==0)) || ((n3 % 2==0) && (n3 % 3==0)) || ((n4 % 2==0) && (n4 % 3==0)))
	{
	if ((n1 % 2==0) && (n1 % 3==0))
	 printf ("Numero divisivel por 2 e 3: %d \n", n1); 
    if ((n2 % 2==0) && (n2 % 3==0))
	printf ("Numero divisivel por 2 e 3: %d \n", n2);
	if ((n3 % 2==0) && (n3 % 3==0))
	printf ("Numero divisivel por 2 e 3: %d \n", n3);
	if ((n4 % 2==0) && (n4 % 3==0))
	printf ("Numero divisivel por 2 e 3: %d \n", n4);
    }
	else
	printf ("Nao foi digitado nenhum numero divisivel por 2 e 3. \n");
	getch();
	return 0;
	
}
