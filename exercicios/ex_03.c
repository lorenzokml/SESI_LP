//solicitar 3 nota float de um aluno e calcula a media
#include <stdio.h>

void main(){
    float n1,n2,n3;
    printf("Digite uma nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira e ultima nota: ");
    scanf("%f", &n3);
    float media = (n1+n2+n3) / 3;
    printf("A média do aluno foi %f", media);
}