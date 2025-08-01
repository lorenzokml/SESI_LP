#include <stdio.h>
// conversor celsius > f

void main(){
    int temp;
    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &temp);
    int f = (temp * 1.8) + 32;
    printf("A temperatura de %d graus Celsius convertidas para Fahrenheit é de %d", temp, f);
}
