#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	char binario[33];
	int a;
	setlocale(LC_CTYPE , "ptb" );
	printf("Digite um n�mero: ");
	scanf("%d",&a);
	itoa(a , binario , 2);
	printf("Voc� digitou: %d", a);
	printf("\nEm hexadecimal: %x", a);
	printf("\nEm octal: %o", a);
	printf("\nEm bin�rio: %s", binario);
}

