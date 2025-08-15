#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    // Classificação do IMC
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Classificação: Peso normal\n");
    } else if (imc < 30) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc < 35) {
        printf("Classificação: Obesidade grau 1\n");
    } else if (imc < 40) {
        printf("Classificação: Obesidade grau 2\n");
    } else {
        printf("Classificação: Obesidade grau 3 (mórbida)\n");
    }

    return 0;
}