#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_CTYPE,"ptb");
	float notas[100];
	char a;
	int i;
	printf("Float = %d bytes\n", sizeof(float));
	printf("Notas = %d bytes\n", sizeof(notas));
	printf("Vetor ocupa %d posições\n", sizeof(notas)/sizeof(float));
	printf("Int = %d bytes", sizeof(int));
	printf("Char = %d bytes\n", sizeof(char));
	printf("%f", notas[101]);
	return 0;
}
