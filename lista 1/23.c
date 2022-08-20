#include <stdio.h>

main(){
    float n1,n2,n3, media;
    printf("Digite um número: ");
    scanf("%f", & n1);
    
    printf("Digite um número: ");
    scanf("%f", & n2);
    
    printf("Digite um número: ");
    scanf("%f", & n3);

    media = (n1 + n2 + n3)/3;

    printf("%f",  media);
}