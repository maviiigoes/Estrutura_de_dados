#include <stdio.h>
#include <math.h>

main(){
    int idade_dias, anos,meses,dias;
    printf("Digite a sua idade em dias: ");
    scanf("%d", & idade_dias);

    anos = trunc(idade_dias/365);
    meses = trunc((idade_dias%365)/30);
    dias = trunc((idade_dias%365)%30);

    printf("Sua idade equivake a %d anos, %d meses %d dias.", anos,meses,dias);
}
