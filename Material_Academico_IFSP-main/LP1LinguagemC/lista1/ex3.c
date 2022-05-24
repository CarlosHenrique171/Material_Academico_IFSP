#include <stdio.h>
#include <math.h>

int main(){
	float Vol_cilindro,PI,raio,altura;
	PI=3.141592;
	printf("Digite a altura: ");
	scanf("%f",&altura);
	printf("Digite o raio: ");
	scanf("%f",&raio);
	Vol_cilindro=PI*pow(raio,2)*altura;
	printf("Para a altura %.2f e raio %.2f temos Volume do cilindro de: %.3f",altura,raio,Vol_cilindro);
	return 0;
}
