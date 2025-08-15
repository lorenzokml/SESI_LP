#include <stdio.h>

int main() {
    int num;
    unsigned long long fatorial = 1;  // 


    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);


    if (num < 0) {
        printf("Fatorial não existe para números negativos.\n");
    } else {

        for (int i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %llu\n", num, fatorial);
    }

    return 0;
}