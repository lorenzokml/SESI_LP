#include <stdio.h>
// calcular idade

void main(){
    int nasc,ano;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &nasc);
    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    int idade = ano - nasc;
    printf("Você tem %d anos.",idade);
}
