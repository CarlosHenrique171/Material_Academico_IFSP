#include <stdio.h>
#include <stdlib.h>

void main(){
	typedef struct{
		int idade;
		float peso;
		float altura;
	}Atleta;
	int l,i;
	
	Atleta *a[3];
	for(i=0;i<=2;i++){
		a[i] = malloc(sizeof(Atleta));
		printf("Atleta %i | ",i+1);
		printf("Digite a idade do Atleta: ");
		scanf("%i",&a[i]->idade);
		printf("Digite o peso do Atleta: ");
		scanf("%f",&a[i]->peso);
		printf("Digite a altura do Atleta: ");
		scanf("%f",&a[i]->altura);
	}
	for(l=0;l<=2;l++){
		printf("Atleta %i",l);
		printf("A idade do Atleta: %i\n",a[l]->idade);
		printf("O peso do Atleta: %f\n",a[l]->peso);
		printf("A altura do Atleta: %f\n",a[l]->altura);
		free(a[l]);
	}
	
	
}
