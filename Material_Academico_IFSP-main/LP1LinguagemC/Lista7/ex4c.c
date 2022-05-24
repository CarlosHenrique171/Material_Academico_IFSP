#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	char palavra[30]="";
	printf("Digite uma palavra: ");
	fgets(palavra,5,stdin);
	//utilizando printf n pula linha
	printf("%s",palavra);
}
