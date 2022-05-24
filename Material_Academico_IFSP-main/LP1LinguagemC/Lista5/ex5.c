#include <stdio.h>
#include <locale.h>

int main(){
	char confirma,s,S;
	float largura=0,comprimento=0,area=0,soma=0;
	setlocale(LC_CTYPE,"ptb");
	do{
		printf("Digite a largura: ");
		scanf("%f",&largura);
		printf("Digite o comprimento: ");
		scanf("%f",&comprimento);
		area=(largura*comprimento);
		printf("Area do comodo: %.2f\n",area);
		printf("Confirmar com sim(s) ou não(n): ");
		scanf(" %c",&confirma);
		if(confirma=='s'||confirma=='S'){
			soma=soma+area;
			printf("soma: %.2f\n",soma);
		}
		printf("deseja continuar sim(s) ou não(n): ");
		scanf(" %c",&confirma);
	}while(confirma=='s'||confirma=='S');
}
