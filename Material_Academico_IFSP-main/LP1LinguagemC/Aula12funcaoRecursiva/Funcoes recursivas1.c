#include <stdio.h>

int pot(int base, int expoente);


int main(){
	int b, e, resultado;
	
	printf("Digite a base: ");
	scanf("%d", &b);
	printf("Digite a expoente: ");
	scanf("%d", &e);
	
	resultado=pot(b,e);
	printf("%d",resultado);
	
}

int pot(int base, int expoente){
	int resultado;
	if(expoente==0){
		resultado=1;
	}else{
		resultado=base*pot(base , expoente-1);
	}
	return resultado;
}
