#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_CTYPE,"ptb");
	int l,c,m[10][3];
	srand(time(NULL));
	for (l=0;l<10;l++){
		for(c=0;c<3;c++){
			m[l][c]= rand() % 100;
		}
	}
	for (l=9;l>=0;l--){
		for(c=2;c>=0;c--){
			printf("%d\n",m[l][c]);
		}
	}
}
