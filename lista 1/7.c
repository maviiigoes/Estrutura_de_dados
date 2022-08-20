#include <stdio.h>

main(){
    float valor, novo_valor;
    printf("Digite um valor:");
    scanf ("%f", & valor);
    novo_valor = valor - (valor*0.30);
    printf("%f",novo_valor);

}