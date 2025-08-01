#include <stdio.h>
// area triangulo

void main(){
    float n1, desc;
    printf("Digite o valor do produto: ");
    scanf("%f", &n1);
    printf("Digite o desconto: ");
    scanf("%f", &desc);
    float form = (n1 * desc) / 100;
    float newV = n1 - form;
    printf("O desconto é de R$%.2f \n", form);
    printf("O novo valor do produto com o desconto aplicado é de R$%.2f \n", newV);
}
