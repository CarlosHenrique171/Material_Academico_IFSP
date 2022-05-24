#include <stdio.h>

void main(){
	char nome[30];
	printf("Digite o nome:");
	//29 é a quantidade de characteres
	scanf("%29[^\n]",nome);
	printf("Nome : %s",nome);
	
}
