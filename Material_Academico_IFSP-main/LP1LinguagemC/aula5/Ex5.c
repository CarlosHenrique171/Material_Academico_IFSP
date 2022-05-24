#include <stdio.h>
#include <locale.h>
int main(){
	char letra;
	setlocale(LC_CTYPE,"ptb");
	printf("Digite um a letra: ");
	scanf("%c", &letra);
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("É uma vogal");
			break;
			default:
				printf("Consoante,numero ou caractere especial");
	}
}
