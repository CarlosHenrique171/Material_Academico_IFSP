#include <stdio.h>
#include <locale.h>

float media(float p1, float t1, float p2, float t2);

void mostraStatus(float a);

int main (){
	setlocale(LC_CTYPE,"ptb");
	
	float p1,p2,t1,t2;	
	
	printf ("Prova 1 : ");
	scanf ("%f",&p1);
	
	printf ("Prova 2 : ");
	scanf ("%f",&p2);
	
	printf ("Trabalho 1 : ");
	scanf ("%f",&t1);
	
	printf ("Trabalho 2 : ");
	scanf ("%f",&t2);
	
	printf ("A media é igual a %.2f",media(p1,t1,p2,t2));
	
	mostraStatus(media(p1,t1,p2,t2));
	
}

float media(float p1, float t1, float p2, float t2){
	return ((p1+p2)*0.7 + (t1+t2)*0.3) / 2.0 ;
}

void mostraStatus(float a){
	if (a>=6.0){
		printf("\nVoce adquiriu sucesso");
	}else{
		printf("\nHoje não");
	}
}
