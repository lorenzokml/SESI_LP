#include <stdio.h>
// idade anos

void main(){
    int age;
    printf("Digite sua idade: ");
    scanf("%d", &age);
    int dias = age * 365;
    printf("Você viveu por aproximadamente %d dias.",dias);
}
