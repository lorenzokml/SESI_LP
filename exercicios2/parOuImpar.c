#include <stdio.h>
int main() {
    int n1;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    if(n1 % 2 == 0){
        printf("Par");
    }
    else{
        printf("Impar");
    }
}