#include <iostream>
#include "listacap9.hpp"

int main() {
    Lista *Lista1 = nullptr;
    int insere = -1;
    int valor;

    while(true) {
        cout << "Inserir Valor (1 - sim, 0 - nao): ";
        cin >> insere;

        if(insere == 1) {
            cout << "Valor: ";  
            cin >> valor;
            if(Lista1 == NULL) Lista1 = no(valor, NULL);
            else inserir(valor, Lista1);
        } else if(insere == 0) {
            cout << "Lista Invertida:" << endl;
            exibir_inv(Lista1);
            break;
        } else {
            cout << "Valor invalido. Tente Novamente!" << endl;
        }

    }
}