#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    int d = idade * 365;
    printf("Você viveu %d dias", d);
}