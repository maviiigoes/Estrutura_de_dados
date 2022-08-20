#include <stdio.h>

main(){
    int anos ,cigarros,valor_cartela ;
    printf("A quantos  anos você fuma? ");
    scanf("%d", & anos);
    printf("Quantos cigarros por dia? ");
    scanf("%d", & cigarros);
    printf("Valor da cartela? ");
    scanf("%d", & valor_cartela);

    int anos_fuamando , cigarrros_dia,total;
    anos_fuamando = anos*365;
    cigarrros_dia = anos_fuamando*cigarros;
    total = (cigarrros_dia/20)*valor_cartela;

    printf ("O valor gasto é de %d reais",total);
    
    
}