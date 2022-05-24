#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	char palavra[30]="",a,e,i,o,u,v,A,E,I,O,U,V;
	int g=0;
	printf("Digite uma palavra: ");
	gets(palavra);
	for(g=0;g<strlen(palavra);g++){
		switch(palavra[g]){
			case'a':
				palavra[g]='4';
			break;
			case'e':
				palavra[g]='3';
			break;
			case'i':
				palavra[g]='1';
			break;
			case'o':
				palavra[g]='0';
			break;
			case'u':
				palavra[g]='v';
			break;
			case'A':
				palavra[g]='4';
			break;
			case'E':
				palavra[g]='3';
			break;
			case'I':
				palavra[g]='1';
			break;
			case'O':
				palavra[g]='0';
			break;
			case'U':
				palavra[g]='V';
			break;
		}
	}
	printf("%s",palavra);
}
