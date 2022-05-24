#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	char palavra[30]="";
	int i;
	printf("Digite uma palavra: ");
	gets(palavra);
	for(i=0;i<strlen(palavra);i++){
	puts(palavra);		
	}

}
