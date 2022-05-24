#include <stdio.h>

int main(){
	//declada as variaveis
	int A[10],B[10],i;
	//lê os 10 elementos do vetor
	for(i=0;i<10;i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &A[i]);
	}
	//Copiar A em B
	for(i=0;i<10;i++){
		B[i]=A[i];
	}
	//mostra na tela A
	for(i=0;i<10;i++){
		printf("\nA[%d]=%d",i,A[i]);
	}
	printf("\n\n");
	//mostra na tela B
	for(i=0;i<10;i++){
		printf("\nB[%d]=%d",i,B[i]);
	}
}

