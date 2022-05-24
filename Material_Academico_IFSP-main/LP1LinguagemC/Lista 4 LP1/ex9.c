#include <stdio.h>
#include <locale.h>

int main(){
	double salario,imposto;
	setlocale(LC_CTYPE,"ptb");
	printf("Digite o salario: ");
	scanf("%lf", &salario);
	if(salario<1903.99){
		imposto=0;
	}
	if(salario>=1903.99&&salario<=2826.65){
		imposto=salario*0.075;
	}
	if(salario>=2826.66&&salario<=3751.05){
		imposto=salario*0.15;
	}
	if(salario>=3751.06&&salario<=4664.68){
		imposto=salario*0.225;
	}
	if(salario>4664.68){
		imposto=salario*0.275;
	}
	printf("\n\nSalario: R$%.2f\nImposto de renda: R$%.2f",salario,imposto);
}
