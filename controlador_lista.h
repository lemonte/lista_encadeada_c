#include "listas.h"

void inicializaLista(TLista *lista){
	lista->inicio= NULL;
	lista->fim = NULL;
	lista->total = 0;
}

void insereElemento(TLista * L, int num){
	TNo *novo = (TNo *)malloc(sizeof(TNo));
	TNo *atual = NULL;
	TNo * anterior;
	int inserido = 0;
	
	novo->valor = num;
	novo->prox = NULL;
	
	if(L->inicio == NULL){
		L->inicio = novo;
		L->fim = novo;
		L->total++;
	}else{
		atual = L->inicio;
		anterior = NULL;
	
		
		while(atual != NULL){
			if(atual->valor >= novo->valor){
				novo->prox = atual;
				if(anterior == NULL){
					L->inicio = novo;
				}else{
					anterior->prox = novo;
				}
				inserido = 1;
				L->total++;
				break;
			
			}
			anterior = atual;
			atual = atual->prox;
		}
		if(!inserido){
			L->fim->prox = novo;
			L->fim = novo;
		}
		L->fim = novo;
	
		
		
	}
}

void mostrarTodaLista(TLista * L){
	if(L->inicio != NULL){
			TNo *atual = L->inicio;
			printf(" ##### MOSTRANDO ELEMENTOS DA LISTA #####");
			while(atual != NULL){
				printf("\n");
				printf("valor -> %d", atual->valor );
				printf("\n");
				atual = atual->prox;
			}
	}else{
		printf("====== Sua lista esta vazia ======");
	}

	
}
