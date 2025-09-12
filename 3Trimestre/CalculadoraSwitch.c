#include <stdio.h>

void soma(int a, int b) {
    printf("Resultado da soma: %d\n", a + b);
}

void subtracao(int a, int b) {
    printf("Resultado da subtração: %d\n", a - b);
}

void multiplica(int a, int b) {
    printf("Resultado da multiplicação: %d\n", a * b);
}

void divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: divisão por zero não é permitida.\n");
    } else {
        printf("Resultado da divisão: %d\n", a / b);
    }
}

int main() {
    int opcao, num1, num2;

    printf("CALCULADORA\n");
    printf("1 - SOMA\n2 - SUBTRACAO\n3 - MULTIPLICACAO\n4 - DIVISAO\n");
    printf("Selecione uma das opções: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opção inválida.\n");
        return 1;
    }

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch (opcao) {
        case 1:
            soma(num1, num2);
            break;
        case 2:
            subtracao(num1, num2);
            break;
        case 3:
            multiplica(num1, num2);
            break;
        case 4:
            divisao(num1, num2);
            break;
    }

    return 0;
}
