#include <stdio.h>

main(){
    int lado, area;
    printf ("Digite o valor do lado do quadrado: ");
    scanf("%d", & lado);
    area =  lado * lado;
    printf("Área do quadrado: %d ", area);
    return 0 ;
}