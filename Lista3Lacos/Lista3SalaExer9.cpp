#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int c;
	float n, m, p;
	printf ("Insira um numero para a base: ");
	scanf ("%f", &n);
	printf ("Insira um numero para o expoente: ");
	scanf ("%f", &m);
	if (m == 0) {
	p=1;
	} else {
	if (m< 0) {
	n=1 / n;
	m=-(m);
	}
	c=1;
	p=n;
	while (c<m){
		p= pow(n, m);
		c++;
	}
}
	printf("A potencia sera: %.2f \n", p);
	getch();
	return 0;
}
