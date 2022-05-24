#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	char palavra[30]="",inverso[30]="";
	int i,f=0;
	printf("Digite uma palavra: ");
	gets(palavra);
	for(i=strlen(palavra)-1;i>=0;i--){
		inverso[f]=palavra[i];
		f++;
	}
	puts(inverso);
}
