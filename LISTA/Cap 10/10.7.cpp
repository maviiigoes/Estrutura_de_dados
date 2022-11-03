#include <iostream>
#include "polinomio.hpp"

void soma(Poli *poli1, Poli poli2) {
    if(poli2 == NULL) return;
    addTermo(poli2->coeficiente, poli2->expoente, poli1);
    soma(poli1, poli2->prox);
}

int main() {
    Poli poli1 = termo(2, 4, termo(3, 3, termo(6, 2, NULL)));
    Poli poli2 = termo(7, 5, termo(4, 4, termo(2, 3, termo(3, 2, NULL))));
    soma(&poli1, poli2);

    exibir(poli1);
}