#include <stdio.h>
#include <math.h>

main(){
    int min, dias , horas , minutos ;
    printf("Digite um número em minutos:");
    scanf("%d", & min);

    dias = trunc(min/1440);
    horas = trunc((min%1440)/60);
    minutos = trunc((min%1440)%60);

    printf ("O valor que você digitou é igual  a %d dias, %d horas e %d minutos.",dias,horas,minutos );


}