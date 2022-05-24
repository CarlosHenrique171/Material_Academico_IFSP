#include <stdio.h>
#include <math.h>
#define PI 3.14151

int main(){
	//declarando as variaveis
	float Vol_cilindro,altura,raio;
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	Vol_cilindro = PI * pow(raio, 2) * altura;
	
	printf("\nO resultado e %.2f", Vol_cilindro);
	
	return 0;
}
