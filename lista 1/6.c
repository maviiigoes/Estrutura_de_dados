#include <stdio.h>

main(){
    float salario, novo_salario;
    printf("Digite o seu sálario: ");
    scanf("%f", & salario);
    novo_salario = salario + (salario*0.25);
    printf ("%f é seu novo salário" , novo_salario);

}