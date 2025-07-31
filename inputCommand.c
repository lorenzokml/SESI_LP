#include <stdio.h>

void main(){
    int a;
    int b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d" , &b);
    int mult = a*b;
    printf("A multiplicação entre os valores %d x %d é %d", a,b,mult);
}
