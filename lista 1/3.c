#include <stdio.h>

int main(){
    int velocidade_k ;
    printf ("Valor em km/h");
    scanf("%d",& velocidade_k);
    int velocidade_m;
    velocidade_m = velocidade_k/3.6;
    printf("%d km/h",velocidade_m);
}
