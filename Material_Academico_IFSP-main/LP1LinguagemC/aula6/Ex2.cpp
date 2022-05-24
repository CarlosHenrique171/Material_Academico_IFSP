#include <stdio.h>

int main(){
	int i=0,a;
	float prova=0.0,media=0.0;
	printf("Digite quantidade de provas: ");
	scanf("%d",&a);
	while(i<a){
		printf("Digite nota da prova: ");
		scanf("%f", &prova);
		media+=prova;
		i++;
	}
	media/=i;
	printf("========================\n");
	printf("Media da sala: %.2f \n",media);
	printf("========================");
	printf("%d",i);
}
