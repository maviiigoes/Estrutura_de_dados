//Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)//

#include <stdio.h>

main(){
    int temp_c, temp_f;
    printf("Digite a temperatura em C°: ");
    scanf ("%d",& temp_c);
    temp_f = (9* temp_c + 160)/5;

    printf ("%d", temp_f);
}