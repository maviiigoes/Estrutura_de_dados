#include <stdio.h>

main(){
    int raio, volume;
    printf ("Digite o valor do raio: ");
    scanf("%d", & raio);
    volume =  (4*3.14*(raio*raio*raio)/3);
    printf("Volume: %d ", volume);
    return 0 ;
}