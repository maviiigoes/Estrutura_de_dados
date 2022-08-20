#include <stdio.h>
#include <math.h>

main(){
    float valorProd, prestacao,entrada ;
    printf("Digite o valor do produto:");
    scanf("%f",& valorProd);
    prestacao = trunc(valorProd/3);
    entrada = valorProd - prestacao*2;

    printf("Valor da entrada é %f, e da prestação %f", entrada,prestacao);
}