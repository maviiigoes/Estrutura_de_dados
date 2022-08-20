#include <stdio.h>

main(){
    float custo_fabrica,custo_imposto,custo_dist,custo_consumidor;
     
    printf("Digite o custo de fabrica:");
    scanf("%f",& custo_fabrica);
    custo_imposto = custo_fabrica*0.45;
    custo_dist = custo_fabrica * 0.28;
    custo_consumidor = custo_fabrica + custo_imposto+custo_dist;
    printf("Custo ao consumidor é de %f",custo_consumidor);
}