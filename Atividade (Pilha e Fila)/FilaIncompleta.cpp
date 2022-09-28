

#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

template <typename T >

class No{
	public:
		T valor;
		No<T>  *prox;
		No(T n){
			valor = n;
			prox = nullptr;
		}
};

template<typename T>

class Fila{
	private:
		No<T> *inicio_ = nullptr;
		No<T> *fim_ = nullptr;

		int ctt = 0

		public:
			Fila(){}
		
		void enQueue(T n){
            No<T> *item = (No<T>*)malloc(sizeof(No<T>));
            item->valor = n;

            if(isEmpty()){
                inicio_ = item;
                fim_ = item;
            }else{
                fim_->prox = item;
                fim_ = item;
            }

            ctt++;
		}

		T deQueue(){
				if(isEmpty()){
					throw exception();
				}
				ctt--;
			
				T valor = inicio_ -> valor;

				if(is_Empty()){
					free(inicio_);
					inicio_ = nullptr;
					fim_ = nullptr;
				}else{
					No<T> *novoInicio = inicio_-> prox;
					free(inicio_);
					inicio_ = novoInicio;
				}

				return valor;
			
		}
			
		
		
		bool isEmpty(){
			return (inicio == NULL);
		}
	
	     void clear(){
			while (!isEmpty())
			{
				cout<< deQueue() << endl;
			}
				
		}

		T inicio (){
			if(!isEmpty()){
				return inicio ->valor;
			}else{ 
				cout << "Pilha vazia" << endl;
				throw exception();
			}
		}

		T fim(){
			if(!isEmpty()){
				return inicio ->valor;
			}else{ 
				cout << "Pilha vazia" << endl;
				throw exception();
			}

		}
		

};

int main(){
	Fila<char> fila_ = Fila<char>();
	fila_.enQueue('M');
	fila_.enQueue('a');
	fila_.enQueue('v');
	fila_.enQueue('i');
    
	fila_.clear();

	
}