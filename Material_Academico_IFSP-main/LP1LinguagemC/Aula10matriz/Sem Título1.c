#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"ptb");
	int l,c,i,j,m[2][2][2][3];
	
	
	for (l=0;l<3;l++){
		for (c=0;c<2;c++){
			for (j=0;j<2;j++){
				for (i=0;i<2;i++){
					printf("m[%d][%d][%d][%d]: ",l,c,j,i);
					scanf("%d", &m[j][i][c][l]);
				}
			}
		}	
	}
	for (l=0;l<3;l++){
		for (c=0;c<2;c++){
			for (i=0;i<2;i++){
				for (j=0;j<2;j++){
					printf("%d ",m[j][i][c][l]);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");	
	}
}
