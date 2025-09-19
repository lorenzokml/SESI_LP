#include <stdio.h>

int main() {
    int valores[10];  // Vetor para armazenar 10 números
    int soma = 0;     // Variável para armazenar a soma dos números

    // Entrada de dados
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Cálculo da soma
    for (int i = 0; i < 10; i++) {
        soma += valores[i];  // Adiciona cada valor à variável soma
    }

    // Exibe o resultado
    printf("A soma de todos os elementos do vetor é: %d\n", soma);

    return 0;
}
