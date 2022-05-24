#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "ptb");
	
	int num_letras,f=0;
	char palavra[30]="";
	
	printf("Escreva uma palavra: ");
	scanf("%s", palavra);
	
	while(f==0){
		
		printf("Digite quantas letras quér mostrar: ");
		scanf("%d", &num_letras);
	
		if(num_letras==strlen(palavra)){
			
		printf("\n\nVocê digitou: %s",palavra);
		
		f=1;
		
		}else{
			
			puts("numero de letras escolhido invalido por um dos motivos abaixo:\n-> Menor ou igual a zero\n-> Acima do numero de letras da palavra\n-> Abaixo do numero de caracteres da palavra");
		}
	}
}
