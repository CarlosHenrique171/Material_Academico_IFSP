#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	char binario[33];
	int a;
	setlocale(LC_CTYPE , "ptb" );
	printf("Digite um número: ");
	scanf("%d",&a);
	itoa(a , binario , 2);
	printf("Você digitou: %d", a);
	printf("\nEm hexadecimal: %x", a);
	printf("\nEm octal: %o", a);
	printf("\nEm binário: %s", binario);
}

