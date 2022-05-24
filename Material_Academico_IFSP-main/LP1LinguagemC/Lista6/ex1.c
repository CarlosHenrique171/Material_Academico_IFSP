#include <stdio.h>

int main(){
	//declada as variaveis
	int vet[12],x,i;
	//lê os 12 elementos do vetor
	for(i=0;i<12;i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &vet[i]);
	}
	//lê um valor inteiro
	printf("X= ");
	scanf("%d", &x);
	//atualiza o vetor multiplicando por um valor x
	for(i=0;i<12;i++){
		vet[i]=vet[i]*x;
	}
	//mostra na tela o resultado de vet
	for(i=0;i<12;i++){
		printf("\n%d",vet[i]);
	}
}
