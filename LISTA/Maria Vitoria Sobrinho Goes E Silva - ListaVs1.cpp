#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

int qtt_elementos = 0;
Aluno lista[30];

//retorna a posicao do elemento procurado
int procura(int mat){	
	int t = qtt_elementos;
	for (int i = 0; i<t;i++){
		if(lista[i].mat == mat){
			return i;
		}
	}
	return -1;
}

void incluirDesordenado(Aluno e){
	if(procura(e.mat)==-1){
		lista[qtt_elementos] = e;
		qtt_elementos++;
	}
	
}



//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
	cout << "Nome do aluno: " << lista[pos].nome << endl;
	cout << "Matricula do aluno: " << lista[pos].mat << endl;
}


//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat){
	int posicao = procura(mat);

	if(posicao != -1){
		mostrar(posicao);

	}else{
		cout<<"Não encontrado!"<<endl;
	}

}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00(int mat){
	int i = procura(mat);
	lista[i] = lista[qtt_elementos];
	free(&lista[qtt_elementos]);
	qtt_elementos--;
	
}

//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void remover01(int mat){
	int elemento = procura(mat);
	for(int i = elemento; i<qtt_elementos;i++){
		lista[i] = lista[i-1];
	}
	free(&lista[qtt_elementos]);
	qtt_elementos--;
	
}

main(){

	Aluno a1;
	
	a1.mat = 1;
	a1.nome = "Maria";

	Aluno a2;

	a2.mat = 2;
	a2.nome ="Vitoria";

	Aluno a3;

	a3.mat = 3;
	a3.nome = "Mila";

	incluirDesordenado(a1);
	incluirDesordenado(a2);
	incluirDesordenado(a3);

	procura(4);

	mostrar(2);

	remover01(2);

	consultar(2);


}

/*
RESULTADO:

Nome do aluno: Mila
Matricula do aluno: 3
N├úo encontrado!

*/	
	

