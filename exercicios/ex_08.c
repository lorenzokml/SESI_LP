#include <stdio.h>
// velocidade media

void main(){
    float dist, t;
    printf("Distancia percorrida em km: ");
    scanf("%f", &dist);
    printf("Digite o tempo gasto em horas: ");
    scanf("%f", &t);
    float media = dist/t;
    printf("A velocidade média da viagem foi de %.2f km/h", media);
}
