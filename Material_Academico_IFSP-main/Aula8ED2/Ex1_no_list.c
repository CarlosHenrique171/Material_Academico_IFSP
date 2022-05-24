#include <stdio.h>
#include <stdlib.h>

void main(){
	typedef struct{
		int idade;
		float peso;
		float altura;
		struct Atleta *prox;
	}Atleta;
	int l,i;
	
	Atleta *a[3];
	Atleta *aux;
	for(i=0;i<=2;i++){
		a[i] = malloc(sizeof(Atleta));
		if(i > 0){
			a[i-1]->prox = a[i];
			//a[i]->prox = NULL;
		}
		printf("Atleta %i | ",i+1);
		printf("Digite a idade do Atleta: ");
		scanf("%i",&a[i]->idade);
		printf("Digite o peso do Atleta: ");
		scanf("%f",&a[i]->peso);
		printf("Digite a altura do Atleta: ");
		scanf("%f",&a[i]->altura);
	}
	for(l=0;l<=2;l++){
		if(l == 0){
			printf("\nAtleta %i\n",l+1);
			printf("A idade do Atleta: %i\n",a[l]->idade);
			printf("O peso do Atleta: %.2f\n",a[l]->peso);
			printf("A altura do Atleta: %.2f\n",a[l]->altura);
		}else{
			aux = a[l-1]->prox;
			printf("\nAtleta %i\n",l+1);
			printf("A idade do Atleta: %i\n",aux->idade);
			printf("O peso do Atleta: %.2f\n",aux->peso);
			printf("A altura do Atleta: %.2f\n",aux->altura);
			free(a[l]);	
		}
	}
	
	
}
