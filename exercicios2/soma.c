#include <stdio.h>
int main() {
    int n1,n2;
    printf("Digite um valor:  \n");
    scanf("%d", &n1);
    printf("Digite outro valor: \n");
    scanf("%d", &n2);
    int s = n1 + n2;
    printf("A soma entre os números é %d", s);
}