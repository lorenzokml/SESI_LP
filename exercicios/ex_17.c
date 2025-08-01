#include <stdio.h>
// idade anos

void main(){
    int n1, n2, n3;
    printf("Primeiro valor: ");
    scanf("%d", &n1);
    printf("Segundo valor: ");
    scanf("%d", &n2);
    printf("Terceiro valor: ");
    scanf("%d", &n3);
    int m = (n1 + n2 + n3) /3;
    int s = n1+n2+n3;
    printf("Media: %d \n", m);
    printf("Soma: %d \n", s);
    
    int maior = n1;
    if(n2 > maior){
        maior = n2;
    }
    
    if(n3 > maior){
        maior = n3;
    }
    
    printf("Maior: %d", maior);
}
