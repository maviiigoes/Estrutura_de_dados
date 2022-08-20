//Um caixa eletrônico deve possuir algum mecanismo para decidir o
//numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível
//critério seria o da "distribuição ótima" no sentido de que as notas de menor valor disponíveis fossem
//distribuídas em número mínimo possível. Por exemplo, se a maquina só dispõe de notas de R$ 50, de R$ 20,
//de R$ 10, de R$ 5 e de R$ 2, para uma quantia solicitada de R$ 87, o programa deveria indicar uma nota de
//R$ 50, uma nota de R$20,00, uma nota de R$ 10, uma nota de R$ 5 e uma nota de R$ 2. Escreva um programa
//que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da
//distribuição ótima.  

#include <stdio.h>

main(){
int valor_saque, nota50, nota20,nota10,nota5,nota2;

printf("Digite o valor que você que deseja sacar");
scanf("%d", & valor_saque);

nota50 = floor(valor_saque/50);
nota20 = floor((valor_saque %50)/20);
nota10 = floor((valor_saque %50)%20)/10;
nota5 = floor((((valor_saque%50)%20)%10)/5);
nota2 = floor(((((valor_saque%50)%20)%10)%5)/2);

printf("Para o valor q você deseja sacar serão nescessárias %d de 50, %d notas de 20,",nota50 , nota20);
printf(" %d notas de 10, %d notas 5 e %d de dois reais", nota10, nota5, nota2);

}