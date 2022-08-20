#include <stdio.h>
#include <math.h>

main(){
    int idade_anoss,idade_meses, anos, meses, dias;

    printf("Digite sua idade (somente em anos)");
    scanf("%d", & idade_anoss);
    printf("Digite sua idade (somente em meses)");
    scanf("%d", & idade_meses);
    printf("Digite sua idade (somente em dias)");
    scanf("%d", & dias);

    anos= idade_anoss*365;
    meses = idade_meses* 30;
    dias = anos+meses+dias;

    printf("Sua idade equivale a  %d dias.",dias);


}