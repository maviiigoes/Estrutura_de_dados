#include <stdio.h>

 int main(){
    float cotDolar, valorReal, valorDolar ;

    printf("Digite a cotação do dolar:");
    scanf("%f",& cotDolar);
    
    printf("Digite o valor em dolar que você gostaria de converter:");
    scanf("%f", & valorDolar);
   
    valorReal = cotDolar*valorDolar;
    
    printf("%f reais.", valorReal);
    return 0;

    }