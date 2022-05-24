#include <stdio.h>
#include <locale.h>
int main(){
	float T1,T2,P1,P2,media;
	setlocale(LC_CTYPE,"ptb");
	printf("Digite nota da P1: ");
	scanf("%f", &P1);
	printf("Digite nota da P2: ");
	scanf("%f", &P2);
	printf("Digite nota da T1: ");
	scanf("%f", &T1);
	printf("Digite nota da T2: ");
	scanf("%f", &T2);
	media=(((P1+P2)*0.8+(T1+T2)*0.2)/2);
	printf("media:%.2f\n",media);
	if(4<=media&&media<6.0){
		printf("Recuperação");
	}
	else{
		if(media>=6.0){
			printf("Aprovado");
	}
		else{
			printf("Reprovado");
	}
	}
}
