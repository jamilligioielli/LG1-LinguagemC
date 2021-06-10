#include<stdio.h>
#include<conio.h>

int main()
{
	int k, s, v, t, w;
	printf ("Digite cinco numeros: \n");
	scanf("%d %d %d %d %d", &k,&s, &v, &t, &w);
	{
	if ((k>s) && (k>v) && (k>t) && (k>w))
	printf ("Este e o maior numero: %d \n", k);
	else 
	if ((k<s) && (k<v) && (k<t) && (k<w))
	printf ("Este e o menor numero: %d \n", k);
	}
	{
	if ((s>k) && (s>v) && (s>t) && (s>w))
	printf ("Este e o maior numero: %d \n", s);
	else
	if ((s<k) && (s<v) && (s<t) && (s<w))
	printf ("Este e o menor numero: %d \n", s);
	}
	{
	if ((v>k) && (v>s) && (v>t) && (v>w))
	printf ("Este e o maior numero: %d \n", v);
	else
	if ((v<k) && (v<s) && (v<t) && (v<w))
	printf ("Este e o menor numero: %d \n", v);
	}
	{
	if ((t>k) && (t>s) && (t>v) && (t>w))
    printf ("Este e o maior numero: %d \n", t);
	else
	if ((t<k) && (t<s) && (t<v) && (t<w))
    printf("Este e o menor numero: %d \n", t);
    }
    {
	if ((w>k) && (w>s) && (w>v) && (w>t))
	printf ("Este e o maior numero: %d \n", w);
    else
	if ((w<k) && (w<s) && (w<v) && (w<t))
	printf ("Este e o menor numero: %d \n", w);
	}
	
	getch();
	return 0;
	
}
