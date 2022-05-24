#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	char opcao;	
	float n1,n2,resultado;
	setlocale(LC_CTYPE,"ptb");
	printf("Digite um numero: ");
	scanf("%f",&n1);
	printf("Digite outro numero: ");
	scanf("%f",&n2);
	printf("===========================\n");
	printf("|  + --> Soma             |\n");
	printf("|  / --> Divisão          |\n");
	printf("|  * --> Multiplicação    |\n");
	printf("|  - --> Subtração        |\n");
	printf("===========================\n");
	printf("Escolha uma operação: ");
	scanf(" %c",&opcao);
	
	switch(opcao){
		case '+':
					//Soma
					resultado=n1+n2;
					break;
		case '*':
					//Multiplicação
					resultado=n1*n2;
					break;
		case '-':
					//Subtração
					resultado=n1-n2;
					break;
		case '/':	
					//Divisão
					if(n2!=0&&n1!=0){
					resultado=n1/n2;
					}
					else{
						printf("opção invalida");
					}
					break;
		default:
			printf("Opção invalida");
	}
	printf("%.2f%c%.2fresultado:%.2f",n1,opcao,n2, resultado);
}
