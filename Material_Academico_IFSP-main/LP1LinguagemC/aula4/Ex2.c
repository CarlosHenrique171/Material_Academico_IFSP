#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int idade;
	setlocale(LC_CTYPE, "ptb");
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	idade >= 18 ? printf("\n\t=======\n\t=maior=\n\t=======") : printf("\n\t=======\n\t=menor=\n\t=======");
	
}
