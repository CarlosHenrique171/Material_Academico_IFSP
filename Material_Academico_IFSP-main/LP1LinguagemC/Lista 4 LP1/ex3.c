#include <stdio.h>
#include <math.h>

int main(){
	float P1,P2,T1,T2,media;
	printf("Digite a nota da P1: ");
	scanf("%f",&P1);
	printf("Digite a nota da P2: ");
	scanf("%f",&P2);
	printf("Digite a nota da T1: ");
	scanf("%f",&T1);
	printf("Digite a nota da T2: ");
	scanf("%f",&T2);
	media=(((P1+P2)*0.8)+((T1+T2)*0.2))/2;
	printf("media: %0.2f\n",media);
	if(6>media>=4){
		printf("Recuperacao");
	}
	if(media>=6){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
}
