#include <stdio.h>

int main(){
	int a,i,b,c,cont;
	a=0;
	cont=0;
	while(a<=1){
		printf("Digite um numero maior que 1: ");
		scanf("%d",&a);
	}
	printf("Digite um numero: ");
	scanf("%d",&b);
	printf("Digite um numero maior que o anterior: ");
	scanf("%d",&c);
	i=b;
	while(i<=c){
		if(i%a==0){
			cont+=i;
		}
		i++;
	}
	printf("resultado=%d",cont);
}
