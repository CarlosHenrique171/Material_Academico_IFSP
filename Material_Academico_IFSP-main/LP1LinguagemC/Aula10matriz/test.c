#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	int c,l,VetA={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},VetB={35,43,26,18,75,46,94,37,32,57,15,74,26,54,57,43,82,26,31,35},VetC={20,45,20,20,50,30,80,50,50,30,15,90,40,30,40,40,60,40,40,20},m[20][3];
	for(l=0;l<20;l++){
		printf("%d",VetA[l]);
	}
}
