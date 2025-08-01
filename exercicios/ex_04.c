#include <stdio.h>
// conversor cm pra m

void main(){
    float v1;
    printf("Digite um valor em centimetros: ");
    scanf("%f", &v1);
    float m = v1 / 100;
    printf("O valor convertido para metros é: %f", m);
}
