#include <stdio.h>

void main() {
    int v1,v2;
    printf("Digite o 1 valor: ");
    scanf("%d", &v1);
    printf("Digite o 2 valor: ");
    scanf("%d", &v2);
    if(v1>v2){
        printf("O valor 1 é o maior");
    }
    else{
         printf("O valor 2 é o maior");   
    }
}