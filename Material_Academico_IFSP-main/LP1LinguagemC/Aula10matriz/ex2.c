#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	int c,l,VetA[10],VetB[10],VetC[10],m[10][3];
	
	for(l=0;l<10;l++){
		printf("m[%d]: ",l);
		scanf("%d", &VetA[l]);
	}
	for(l=0;l<10;l++){
		printf("m[%d]: ",l);
		scanf("%d", &VetB[l]);
	}
	for(l=0;l<10;l++){
		printf("m[%d]: ",l);
		scanf("%d", &VetC[l]);
	}
	for (l=0;l<10;l++){
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
	for (l=0;l<10;l++){
		for(c=0;c<3;c++){
			printf("%d ",m[l][c]);
		}
		printf("\n");
	}
}
