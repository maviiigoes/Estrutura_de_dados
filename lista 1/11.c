#include <stdio.h>

main(){
    int lado, area, base;
    printf ("Digite o valor do lado do retângulo:  ");
    scanf("%d", & lado);
    printf ("Digite o valor da base do retângulo: ");
    scanf("%d", & base);
    area =  lado * base;
    printf("Área do retângulo: %d ", area);
    return 0 ;
}