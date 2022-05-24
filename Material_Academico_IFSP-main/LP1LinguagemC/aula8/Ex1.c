#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	float media=0.0,notas[10];
	int i;
	for(i=0;i<10;i++){
		printf("|=>|Digite uma nota: ");
		scanf("%f", &notas[i] );
	}
	for(i=0;i<10;i++){
		printf("|=>|Nota %d = %.2f \n",i+1,notas[i]);
		media=media+notas[i];
	}
	media=media/i;
	printf("|=>|A media das notas é: %.2f",media);
}
