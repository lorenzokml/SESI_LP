#include <stdio.h>
// Dollar pro real

void main(){
    float dollar;
    printf("Digite o valor em dollar: ");
    scanf("%f", &dollar);
    float f = dollar * 5.54;
    printf("%0.2f em reais: R$%0.2f", dollar, f);
}
