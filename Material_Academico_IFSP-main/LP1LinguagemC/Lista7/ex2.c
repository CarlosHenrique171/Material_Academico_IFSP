#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	char palavra[30]="";
	printf("Escreva uma palavra: ");
	fgets(palavra,3,stdin);
	puts(palavra);
	}
