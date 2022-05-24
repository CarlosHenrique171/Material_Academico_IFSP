#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	char palavra[140];
	int h=0,a=0,e=0,i=0,o=0,u=0;
	printf("Digite uma palavra com no maximo (140) caracteres: ");
	fgets(palavra,140,stdin);
	
	for(h=0;h<strlen(palavra);h++){
		switch(palavra[h]){
			case 'a':
				a++;
			break;
			case 'e':
				e++;
			break;
			case 'i':
				i++;
			break;
			case 'o':
				o++;
			break;
			case 'u':
				u++;
			break;
			case 'A':
				a++;
			break;
			case 'E':
				e++;
			break;
			case 'I':
				i++;
			break;
			case 'O':
				o++;
			break;
			case 'U':
				u++;
			break;							
		}
	}
	printf("A palavra tem\nletras A:%d\nletras E:%d\nletras I:%d\nletras O:%d\nletras U:%d",a,e,i,o,u);
}
