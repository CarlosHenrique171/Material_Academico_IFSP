#include <stdio.h>
#include <locale.h>

int multiplicar (int A,int B){
	int Res;
	Res = A*B;
	return Res;
}

int main(){
	setlocale(LC_CTYPE,"ptb");
	
	int Num1,Num2,Res;
	
	printf("Digite um n�mero: ");
	scanf("%d",&Num1);
	
	printf("Digite outro n�mero: ");
	scanf("%d",&Num2);
	
	Res = multiplicar (Num1,Num2);
	
	printf("%d",Res);
}
