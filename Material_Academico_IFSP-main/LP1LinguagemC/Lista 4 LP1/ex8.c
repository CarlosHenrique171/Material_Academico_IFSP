#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	char produto[50];
	int qta,codigo;
	float valor_produto,imposto,total,impostoUnidade;
	setlocale(LC_CTYPE,"ptb");
	printf("Digite o codigo do produto: ");
	scanf("%d",&codigo);
	printf("Digite a quantidade do produto: ");
	scanf("%d",&qta);
	printf("Digite o valor do produto: ");
	scanf("%f",&valor_produto);
	//Tomate
	if(codigo==1000){
		impostoUnidade=valor_produto*0.15;
		imposto=(qta*valor_produto)*0.15;
		total=(qta*valor_produto)+imposto;
		//atribui o nome do produto abaixo
		strcpy(produto, "tomate");
	}
	//Livro
	if(codigo==1009){
		impostoUnidade=0;
		total=(qta*valor_produto);
		//atribui o nome do produto abaixo
		strcpy(produto, "livro");
	}
	//Arroz
	if(codigo==1013){
		impostoUnidade=valor_produto*0.19;
		imposto=(qta*valor_produto)*0.19;
		total=(qta*valor_produto)+imposto;
		//atribui o nome do produto abaixo
		strcpy(produto, "arroz");
	}
	//Outros
	if(codigo!=1000&&codigo!=1009&&codigo!=1013){
		impostoUnidade=valor_produto*0.175;
		imposto=(qta*valor_produto)*0.175;
		total=(qta*valor_produto)+imposto;
		//atribui o nome do produto abaixo
		strcpy(produto, "outros");
	}
	printf("Produto: %s\nCodigo: %d\nPreço: %.2f\nQta: %d\nImposto por unidade: %.2f\nTotal: %.2f",produto,codigo,valor_produto,qta,impostoUnidade,total);
}
