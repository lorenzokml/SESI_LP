#include <stdio.h>
// eleição porcentagem cada um

void main(){
    int totalVotos, votoA, votoB;
    float pA, pB;
    printf("Total de votos da eleição: ");
    scanf("%d", &totalVotos);
    printf("Votos candidato A: ");
    scanf("%d", &votoA);
    printf("Votos candidato B: ");
    scanf("%d", &votoB);
    pA = ((float)votoA / totalVotos) *100;
    pB = ((float)votoB / totalVotos) *100;
    printf("Porcentual A = %0.2f \n", pA);
    printf("Porcentual B = %0.2f \n", pB);
}
