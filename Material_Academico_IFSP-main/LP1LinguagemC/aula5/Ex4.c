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
	printf("|  / --> Divis�o          |\n");
	printf("|  * --> Multiplica��o    |\n");
	printf("|  - --> Subtra��o        |\n");
	printf("===========================\n");
	printf("Escolha uma opera��o: ");
	scanf(" %c",&opcao);
	
	switch(opcao){
		case '+':
					//Soma
					resultado=n1+n2;
					break;
		case '*':
					//Multiplica��o
					resultado=n1*n2;
					break;
		case '-':
					//Subtra��o
					resultado=n1-n2;
					break;
		case '/':	
					//Divis�o
					if(n2!=0&&n1!=0){
					resultado=n1/n2;
					}
					else{
						printf("op��o invalida");
					}
					break;
		default:
			printf("Op��o invalida");
	}
	printf("%.2f%c%.2fresultado:%.2f",n1,opcao,n2, resultado);
}
