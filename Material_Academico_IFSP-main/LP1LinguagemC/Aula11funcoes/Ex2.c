#include <stdio.h>
#include <locale.h>

void multiplicar (int A,int B){
	int Res;
	Res = A*B;
	printf("%d",Res);
}

int main(){
	setlocale(LC_CTYPE,"ptb");
	int Num1,Num2;
	printf("Digite um n�mero: ");
	scanf("%d",&Num1);
	printf("Digite outro n�mero: ");
	scanf("%d",&Num2);
	multiplicar (Num1,Num2);
}
