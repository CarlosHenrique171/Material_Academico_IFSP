#include <stdio.h>

int fat(int numero);


int main(){
	int numero, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	resultado=fat(numero);
	printf("%d",resultado);
	
}
//funcao recursiva
int fat(int numero){
	int resultado;
	if(numero==1){
		resultado=1;
	}else{
		resultado=numero*fat(numero-1);
	}
	return resultado;
}
// funcao sem recursividade
int fat2(int numero){
	int f=1, i;
	for(i=numero;1>=1;i--){
		f=f*i;
	}
	return f;
	
}
