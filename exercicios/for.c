#include <stdio.h>

int main()
{
    int v;
    printf("Digite um valor inteiro: ");
    scanf("%d", &v);
    for (int i = 0; i < 11; i++) {
        printf("%d x %d = %d \n", v, i, v*i);
    }
}
