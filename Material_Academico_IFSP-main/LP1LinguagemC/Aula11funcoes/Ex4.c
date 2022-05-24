#include <stdio.h>
#include <locale.h>

void modAdicao();
void modDivisao();
void modSubtracao();
void modMultiplicacao();

int main(){
	setlocale(LC_CTYPE,"ptb");
	
	int opcao;
	
	printf(" ________________________\n");
	printf("|                        |\n");
	printf("|1| para adição:         |\n");
	printf("|2| para Subtração:      |\n");
	printf("|3| para Multiplicação:  |\n");
	printf("|4| para Divisão:        |\n");
	printf("|________________________|\n");
	printf("Digite: ");
	scanf("%d",&opcao);
	
	switch (opcao){
		
		case 1:
			modAdicao ();
			break;
		case 2:
			modSubtracao ();
			break;
		case 3:
			modMultiplicacao ();
			break;
		case 4:
			modDivisao ();
			break;
		default:
			printf("opção invalida");
	}
}

void modAdicao(){
	float v1,v2,Res;
	printf("Digite um número: ");
	scanf("%f",&v1);
	
	printf("Digite outro número: ");
	scanf("%f",&v2);
	Res = v1+v2;
	printf("%.2f",Res);
}
void modSubtracao(){
	float v1,v2,Res;
	
	printf("Digite um número: ");
	scanf("%f",&v1);
	
	printf("Digite outro número: ");
	scanf("%f",&v2);
	
	Res = v1-v2;
	printf("%.2f",Res);
}
void modMultiplicacao(){
	float v1,v2,Res;
	
	printf("Digite um número: ");
	scanf("%f",&v1);
	
	printf("Digite outro número: ");
	scanf("%f",&v2);
	
	Res = v1*v2;
	printf("%.2f",Res);
}
void modDivisao(){
	float v1,v2,Res;
	
	printf("Digite um número: ");
	scanf("%f",&v1);
	
	printf("Digite outro número: ");
	scanf("%f",&v2);
	
	if (v2==0){
		printf("não dividiras por zero");
	}else{
		Res = v1/v2;
		printf("%.2f",Res);
	}
	
}
