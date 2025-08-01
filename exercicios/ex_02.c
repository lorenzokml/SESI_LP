//SOMA DOIS NUMEROS INTEIROS

#include <stdio.h>

void main()
{
    int num1,num2;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    int s = num1 + num2;
    printf("A soma entre %d e %d é %d", num1, num2, s);
}