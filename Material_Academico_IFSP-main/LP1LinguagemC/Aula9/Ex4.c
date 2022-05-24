#include <stdio.h>
//#include <string.h> -->se for c++
int main(){
	char a[]="ADS",b[]="TADS",c[50];
	if(strcmp(a,b) == 0 ){
		puts("Sao iguais");
	}else{
		puts("sao diferentes");
	}
	printf("\n\n saida %d",strcmp(a,b) );
}
