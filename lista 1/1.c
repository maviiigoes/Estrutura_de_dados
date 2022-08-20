#include <stdio.h>

int main(){
    int velocidade_m ;
    printf ("Valor em m/s");
    scanf("%d",& velocidade_m);
    int velocidade_k;
    velocidade_k = velocidade_m*3.6;
    printf("%d km/h",velocidade_k);
}
