#include <stdio.h>
// combustivel

void main(){
    int dist, comb;
    printf("Distancia percorrida: ");
    scanf("%d", &dist);
    printf("Combustivel usado: ");
    scanf("%d", &comb);
    int form = dist / comb;
    printf("Consumo médio por km: %d", form);
}
