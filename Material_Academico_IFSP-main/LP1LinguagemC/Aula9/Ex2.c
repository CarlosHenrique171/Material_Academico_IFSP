#include <stdio.h>
//#include <string.h> -->se for c++
int main(){
	char nome[50], sobrenome[50],curso[50];
	
	printf("Nome: ");
	scanf("%s", &nome);
	
	printf("Sobrenome: ");
	scanf("%s", &sobrenome);
	
	printf("Curso: ");
	scanf("%s", &curso);
	
	printf("\nNome: %s \nSobrenome: %s \nCurso: %s", nome,sobrenome,curso);
}
