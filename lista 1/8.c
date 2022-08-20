#include <stdio.h>
main(){
    float n1, p1,n2,p2,n3,p3, media;
    printf("Digite a nota 1:");
    scanf("%f", & n1);
    printf("Peso da nota 1:");
    scanf("%f",& p1);
    
    printf("Digite a nota 2:");
    scanf("%f", & n2);
    printf("Peso da nota 2:");
    scanf("%f",& p2);
    
    printf("Digite a nota 3:");
    scanf("%f", & n3);
    printf("Peso da nota 3:");
    scanf("%f",& p3);

    media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

    printf("Média pondereada igul a : %f", media);
}


    
