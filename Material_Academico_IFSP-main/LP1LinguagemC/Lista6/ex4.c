#include <stdio.h>

int main(){
	int j,i,vet[10],auxiliar;
	for(i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%d",&vet[i]);
	}
	//ordenação-decrescente
	for(j=0;j<10;j++){
		for(i=0;i<9;i++){
			if(vet[i+1]>vet[i]){
				auxiliar=vet[i];
				vet[i]=vet[i+1];
				vet[i+1]=auxiliar;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",vet[i]);
	}
}
