#include <stdio.h>
// h em m/s

void main(){
    int h;
    printf("Digite a hora: ");
    scanf("%d", &h);
    int m = h * 60;
    printf("%d horas em minutos: %d \n", h,m);
    int seg = h * 60 * 60;
    printf("%d horas em segundos: %d \n", h, seg);
}
