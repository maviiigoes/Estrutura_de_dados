//Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1o pelo 2o.

#include <stdio.h>

main(){
    int n1,n2, quociente, resto ;
    printf("Digite um número:");
    scanf("%d", & n1);
    printf("Digite um número:");
    scanf("%d", & n2);
    quociente = n1/n2;
    resto = n1 % n2;
    printf("Quociente %d resto %d", quociente, resto);

}