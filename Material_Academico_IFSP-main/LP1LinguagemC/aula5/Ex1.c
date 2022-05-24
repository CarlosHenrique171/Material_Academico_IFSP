#include <stdio.h>

int main(){
	float a;
	printf("Digite um valor de 0 a 10: ");
	scanf("%f", &a);
	if(a>=0&&a<4){
		printf("Aprendiz");
	}
	else
		if(a>=4&&a<6){
			printf("Melhorar");
		}
		else
			if(a>=6&&a<8){
				printf("Good");
			}
			else
				if(a>=8&&a<=10){
					printf("Great");
				}
				else
				printf("Seu numero ultrapassou o limite de 0 a 10");
}
