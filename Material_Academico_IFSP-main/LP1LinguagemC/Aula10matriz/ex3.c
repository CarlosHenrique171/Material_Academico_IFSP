#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	int c,l,VetA[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},VetB[]={35,43,26,18,75,46,94,37,32,57,15,74,26,54,57,43,82,26,31,35},VetC[]={20,45,20,20,50,30,80,50,50,30,15,90,40,30,40,40,60,40,40,20},m[20][3],ex[20];
	for (l=0;l<20;l++){
		for(c=0;c<3;c++){
			if(c==0){
				m[l][c]=VetA[l];
			}
			if(c==1){
				m[l][c]=VetB[l];
			}
			if(c==2){
				m[l][c]=VetC[l];
			}
		}
	}
	printf("       Cod | Estoque | Mínimo  \n");
	for (l=0;l<20;l++){
		for(c=0;c<3;c++){
			printf(" \t%.2d ",m[l][c]);
		}
		printf("\n");
	}
	for (l=0;l<20;l++){
			if(m[l][1]<m[l][2]){
				ex[20]= m[l][2]-m[l][1];
				printf("codigo %.2d: %.2d\n",m[l][0],ex[20]);
			}
	}
	
}
