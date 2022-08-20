#include <stdio.h>

main(){
    int base, altura, area;
    printf ("Digite o valor da base do triângulo: ");
    scanf("%d", & base);
    printf ("Digite o valor da altura do triângulo: ");
    scanf("%d", & altura);
    
    area =  (base * altura)/2;
    printf("Área do triângulo: %d ", area);
    return 0 ;
}