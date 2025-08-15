#include <stdio.h>
int main() {
    int n1,n2,n3;
    printf("Digite a primeira nota: \n");
    scanf("%d", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%d", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%d", &n3);
    int m = (n1+n2+n3) / 3;
    printf("A média entre as notas é: %d",m);
}