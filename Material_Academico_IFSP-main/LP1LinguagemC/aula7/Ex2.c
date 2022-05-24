#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_CTYPE,"ptb");
	int tab,num,i;
	printf("tabuada: ");
	scanf("%d",&tab);
	printf("até que numero: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		printf("|=>|%02d|%dx%02d=%02d|\n",i,tab,i,i*tab);
	}
}
