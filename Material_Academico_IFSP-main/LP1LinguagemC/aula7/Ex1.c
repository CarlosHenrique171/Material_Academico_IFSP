#include <stdio.h>

int main(){
	int numeroDeAlunos,i=0,n=0;
	float prova, media=0.0;
	printf("Digite o numero de alunos: ");
	scanf("%d",&numeroDeAlunos);
	for(n=1;n<=numeroDeAlunos;n++){
		for(i=1;i<=3;i++){
			printf("|%d| prova %d = ",n,i);
			scanf("%f", &prova);
			media+=prova;
		}
	}
	printf("media: %.2f",media/(3*numeroDeAlunos));
}
