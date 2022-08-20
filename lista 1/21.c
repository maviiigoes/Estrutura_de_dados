#include <stdio.h>
#include <math.h>

main(){
    int meses_total , anos, meses;

    printf("Digite um valor em meses: ");
    scanf("%d", & meses_total);

    anos = trunc(meses_total/12);
    meses = anos % 12;

    printf("O valor que você digitou equivale à %d anos e %d meses.", anos,meses); 

}