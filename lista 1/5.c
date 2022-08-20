#include <stdio.h>
#include <math.h>

main(){
    int numero,centena,dezena,unidade,inverso;
    printf("Digite  um número de 3 digitos: ");
    scanf("%d", &numero);

    centena = trunc(numero/100);
    dezena = trunc((numero%100)/10);
    unidade = trunc((numero%100)%10);

    inverso = (unidade*100) + (dezena*10) + centena;

    printf("%d",inverso);

}