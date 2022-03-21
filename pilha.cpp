   
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <iostream>
using namespace std;

struct pilha{
	
	int topo;
	int cap;
	float *pElem;
	
};
struct pilha p;

void inicializaPilha (struct pilha *p, int capacidade){
	p -> topo -1;
	p -> cap = capacidade;
	p -> pElem = (float*) malloc (capacidade *sizeof(float));
}

int verificaV (struct pilha*p){
	if (p -> topo == -1 ){
		return 1;
	}else{
		return 0;
	}
}

int verificaC(struct pilha*p) {
	if(p->topo == p->cap -1){
		return 1;
	}else{
		return 0;
	}
}

void empilhar (struct pilha*p, float n ){
	p -> topo++;
	p->pElem[p->topo] = n;
}

float retirar (struct pilha*p){
	p-> topo--;
	
	float controle = p->pElem[p->topo];
	
	return controle;
	
}

float retornaTopo(struct pilha*p) {
	return p->pElem [p->topo];
}

int main(){

	struct pilha newPilha;	
	int cap =0;
	int escolha = 0;
	float val = 0.0;
	
	cout<<"Entre com a capacidade total da pilha!";
	cin>>cap+1;
	
	inicializaPilha (&newPilha, cap);
	
		while (1){
		cout << "\n1)Empilhar\n";
		cout << "2)Retirar\n";
		cout << "3)Mostrar topo da pilha\n";
		cout << "4)Sair\n";
		cout << "\nDigite a opcao desejada: ";
		cin >> opcao;
		
		switch(opcao){
			
			case 1: 
				if (verificaC(&newPilha) == 1){
					cout << "\nPilha Cheia!!\n";
				}else{
					cout << "Entre com o valor: ";
					cin >> val;
					empilhar(&newPilha, val);
				}
				break;
				
				case 2:
				if (verificaV(&newPilha) == 1){
					cout << "\nPilha vazia!\n";
				}else{
					valor = retirar(&newPilha);
					cout << "\nFoi retirado!\n";
				}
				break;
				
				case 3:
				if (verificaV(&newPilha) == 1){
					cout << "\nPilha vazia!\n";
				}else{
					valor = retornaAoTopo(&novaPilha);
					cout << "\nTopo pilha : " << valor << "\n";
				}
				break;
				
				case 4:
				exit(0);
				break;

	
}
