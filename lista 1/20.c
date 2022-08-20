#include <stdio.h>
#include <math.h>

main(){
    int horas,semana,dias,hrs;
    printf("Digite o valor em horas:");
    scanf("%d", & horas);

    semana = trunc(horas/168);
    dias = trunc((horas%168)/24);
    hrs = trunc((horas%168)%24);

    printf("O valor que você digitou equivale a %d semanas, %d dias e %d horas.", semana,dias,hrs);

}