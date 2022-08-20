//Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).

#include <stdio.h>

main(){
    int t_f, t_c;
    printf("Digite a temperatura em C°: ");
    scanf ("%d",& t_f);
    t_c = (5* t_f - 160)/9;

    printf ("%d", t_c);
}