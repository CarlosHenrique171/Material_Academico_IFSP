#include <stdio.h>

int main(){
	int num;
	do{
	printf("\nEscreva um numero positivo (par) ou (impar) para encerrar: ");
	scanf("%d",&num);
	printf("%d-%d",num,num*2);
	}while(num%2==0);
}
