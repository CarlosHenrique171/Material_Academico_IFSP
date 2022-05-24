#include <stdio.h>

int main(){
	int a,b,c;
	printf("Digite 3 numeros em sequencia: ");
	//scanf("%d",&a);
	//scanf("%d",&b);
	//scanf("%d",&c);
	scanf("%d%d%d",&a,&b,&c);
	if (a==2||b==2||c==2){
	
		printf("multiplicacao: %d",a*b*c);
		}else{
			printf("invalido");
}
}
