#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int valor;
	struct Node *direita;
	struct Node *esquerda;
}Node;
	
void main(){
	
	//declarando ponteiros do tipo da Struct (Node) 
	
	Node *N1;
	Node *N2;
	Node *N3;
	Node *N4;
	Node *N5;
	Node *N6;
	Node *N7;
	
	//malloc
	
	N1 = malloc(sizeof(Node));
	N2 = malloc(sizeof(Node));
	N3 = malloc(sizeof(Node));
	N4 = malloc(sizeof(Node));
	N5 = malloc(sizeof(Node));
	N6 = malloc(sizeof(Node));
	N7 = malloc(sizeof(Node));
	
	//atribuição
	
	N1->valor = 1;
	N2->valor = 2;
	N3->valor = 4;
	N4->valor = 5;
	N5->valor = 3;
	N6->valor = 6;
	N7->valor = 7;
	
	
	N1->esquerda = N2;
	N2->esquerda = N3;
	N2->direita = N4;
	N1->direita = N5;
	N5->esquerda = N6;
	N5->direita = N7;
	
	//NULL
	
	N3->esquerda = NULL; 
	N3->direita = NULL;
	
	N4->esquerda = NULL;
	N4->direita = NULL;
	
	N6->esquerda = NULL; 
	N6->direita = NULL;
	
	N7->esquerda = NULL; 
	N7->direita = NULL;
	
	
	printf("Pre Ordem\n");
	preOrdem(N1);
	printf("\nEm Ordem\n");
	emOrdem(N1);
	printf("\nPos Ordem\n");
	posOrdem(N1);
	
	free(N1);
	free(N2);
	free(N3);
	free(N4);
	free(N5);
	free(N6);
	free(N7);
}


void preOrdem(Node *n){
	printf("%i | ",n->valor);
	if(n->esquerda != NULL){
		preOrdem(n->esquerda);
	}
	if(n->direita != NULL){
		preOrdem(n->direita);
	}
}

void emOrdem(Node *n){
	if(n->esquerda != NULL){
		emOrdem(n->esquerda);
	}
	printf("%i | ",n->valor);
	if(n->direita != NULL){
		emOrdem(n->direita);
	}
}

void posOrdem(Node *n){
	if(n->esquerda != NULL){
		posOrdem(n->esquerda);
	}
	if(n->direita != NULL){
		posOrdem(n->direita);
	}
	printf("%i | ",n->valor);
}

