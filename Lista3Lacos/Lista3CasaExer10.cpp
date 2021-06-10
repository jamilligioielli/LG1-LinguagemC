#include <stdio.h>
 
int main()
{
	printf ("\n \t Calculadora \n \n");
    int a,b;
    float result;
    char op;   
    do{
    printf("Escolha a operacao (+,-,*,/) ou digite S para sair: ");
    scanf(" %c",&op);
    while ((op=='s') || (op=='S')){
    	printf(" \t \n Obrigada por utilizar da minha habilidade de calculo! :D");
    	return 0;
	}
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b); 
    result=0;
    switch(op)    
    {
        case '+':
            result=a+b;
            break;
             
        case '-':
            result=a-b;
            break;
         
        case '*':
            result=a*b;
            break;
             
        case '/':
            result=(float)a/(float)b;
            break;
        
        default:
            printf("Nao foi possivel efetuar operacao.\n");
    }
 
    printf("Resultado: %d %c %d = %.2f\n",a,op,b,result);
} while ((op != 's') || (op!='S'));
	return 0;

}
	
	
	
	
	
	
	
	
    




