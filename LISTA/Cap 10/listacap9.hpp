#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define fmt "%d"

using namespace std;
typedef int Item;
typedef struct no{
    Item item;
    struct no *prox;
} Lista;


Lista* no(Item x, Lista* p){
    Lista *n = (Lista*)malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

 void exibir(Lista* L){
    while (L != NULL){
        printf(fmt, L->item);
        L = L->prox;
    }
}





void anexa(Lista *A, Lista *B){
    if(B == NULL) return;
    while (A != NULL) A = (A)->prox;
    A = B;    
}

void f(){
    Lista *I = no(3, no(1, no(5, NULL)));
    exibir(I);
}

void destroi(Lista *L){
    while(L != NULL){
        Lista* n = L;
        L = n->prox;
        free(n);
    }
}

int tam(Lista *L){
    if(L == NULL) return 0;
    return 1 + tam(L->prox);
}

int pert(Item *x, Lista *L){
    if(L == NULL) return 0;
    if(*x == L->item) return 1;
    return pert(x, L->prox);
}

Lista* clone(Lista *L){
    if(L == NULL) return NULL;
    return no(L->item, clone(L->prox));
}

void exibir_inv(Lista *L){
    if(L == NULL) return;
    exibir_inv(L->prox);
    printf(fmt,L->item);
}

Lista* ultimo(Lista * L){
    int tam_lista = tam(L);
    Lista* atual = L;

    while (int ctt = 0 < tam_lista){
        atual = atual->prox;
        ctt++;
    }
    return atual;


}

int soma(Lista *L){
    int tam_lista = tam(L);
    int valor_soma = 0;
    while (int ctt = 0 < tam_lista){
        valor_soma += L->item;
        L = L->prox;
        ctt++;
    }
    return valor_soma;
}


Lista* enesimo(int n, Lista *L){
    int tamanho = n;
    Lista *pos = L;
    while(int cont = 0 < tamanho){
        pos = pos->prox;
        cont++;
    }
    return pos;
}

void inserir(Item item, Lista *L) {
    while( L!= NULL && (L)->item < item) L = L->prox;
    L = no(item, L);  
}




int estaEm(Item item, Lista *lista) {
    while(lista != NULL && lista->item < item) lista = lista->prox;
    return lista != NULL && lista->item == item;
}