#include <stdio.h>
// operação basica

void main(){
    float n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    float s = n1 + n2;
    float d = n1 / n2;
    float m = n1 * n2;
    printf("Soma: %.2f \n",s);
    printf("Divisão: %.2f \n", d);
    printf("Multiplicação: %.2f \n",m);
}
