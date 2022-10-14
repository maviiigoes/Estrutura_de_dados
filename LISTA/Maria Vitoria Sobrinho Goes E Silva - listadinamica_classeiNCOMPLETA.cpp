#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);			
			prox=NULL;
		}
};

class Lista{
	public:
		No *inicio;
		No *fim;
		
	
	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}	

		void addToFinal(int m, char n[23]){
			No *novo= new No(m,n);
			if (fim == NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				fim->prox=novo;
				fim=novo;
			}
		}
		

			
		int lst_vazia(){
			return (inicio==NULL);
		}


		void addToInicio(int m,char n[23]){
			No *novo = new No(m,n);
			if(fim == NULL){
				inicio = novo;
				fim == novo;
			}else{
				inicio->prox = novo;
				inicio = novo;
			}
		}

		void mostra(){
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			}
			else{
				No *atual = inicio;
				cout<< "\nvalor\n"<< atual;
				while (atual != NULL){
					cout<<"\nNome: \n"<< atual->nome;
					cout<<"\nMatricula:\n "<<atual->mat;
					atual = atual->prox;

				};
			};
		};
						
		
		
		int remove(int mat){
			No* aux;
			No* novo = inicio;
			No* ant = NULL;

			if(!lst_vazia()){
				while(novo != NULL){
					if(novo -> mat == mat){
						if (novo == inicio){
							inicio = inicio->prox;
							free(novo);
							return 1;
						}
						if (fim == novo){
							aux = fim;
							fim = ant;
							ant->prox = NULL;
							free(aux);
							return 1;
						} 
						
						ant->prox = novo->prox;
						free(novo);
						return 1;

					}
					ant = novo;
					novo = novo->prox;
				}

			}else{
				return 0;
			}
		}
		 
		
	

		// aux no metodo remove, vai 
		//retornar o endereco do ant
		No *busca(int mat){
			No* matProcurada = inicio;
			while(matProcurada ->prox != NULL){
				if(matProcurada -> mat = mat){
					cout<<"Matricula:\n"<< matProcurada->mat<<endl;
				}else {
					cout << "Aluno nao existe" << endl;
				}

			}
			
		
		}
		
 		void removeTodos(){
			No *atual = inicio;
			No *proximo=NULL;
			while (atual!=NULL){
					proximo=atual->prox;
					cout<<"\n Apagar:"<<atual->nome;
					free(atual);
					atual=proximo;						
			}
			inicio=atual;
		}
		 

		// criar uma nova lista que seja o inverso da primeira
		void crialistainversa(){
			Lista *inversa = new Lista();
			No* novo = inicio;
			while (novo->prox != NULL){
				inversa->addToInicio(novo->mat, novo->nome);
				novo = novo->prox;
			} 
			inversa->addToInicio(fim->mat, fim->nome);
				
		}


		//inverter a propria lista
		void listainvertida(){
			No *aux = inicio;
			No* contador = inicio;
			No* listar;

			while (aux != NULL){
				int matriculaRemover = aux->mat;
				char removerNome[23];
				strcpy(removerNome, aux->nome);

				aux = aux->prox;
				addToInicio(matriculaRemover,removerNome);
			}
		}
};



main(){
   Lista *l=new Lista();
    l->addToFinal(1,"Joao");
   l->addToFinal(2,"Gabriela");
   l->addToFinal(3,"Fabiola");
   l->addToInicio(5,"Joana Oliveira");
   l->addToInicio(6,"Cristiano Oliveira");
   l->mostra(); 
 
  l->listainvertida();
  l->mostra();

   

}

