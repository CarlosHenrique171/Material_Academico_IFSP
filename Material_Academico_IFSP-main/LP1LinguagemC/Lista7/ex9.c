#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	char palavra[140];
	int i=0,f=0;
	printf("Digite uma palavra com no maximo (140) caracteres: ");
	fgets(palavra,140,stdin);
	
	for(i=0;i<strlen(palavra);i++){
		switch(palavra[i]){
			case 'a':
				f++;
			break;
			case 'e':
				f++;
			break;
			case 'i':
				f++;
			break;
			case 'o':
				f++;
			break;
			case 'u':
				f++;
			break;
			case 'A':
				f++;
			break;
			case 'E':
				f++;
			break;
			case 'I':
				f++;
			break;
			case 'O':
				f++;
			break;
			case 'U':
				f++;
			break;							
		}
	}
	printf("A palavra tem %d vogais",f);
}
