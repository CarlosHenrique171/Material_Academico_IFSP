#include <stdio.h>

int main(){
	int i,n;
	printf("Digite N: ");
	scanf("%d",&n);
	int vet[n];
	for(i=0;i<n;i++){
		printf("Vetor[%d]=",i);
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<n;i++){
		printf("\n%d",vet[n-i-1]);
	}
	return 0;
}
