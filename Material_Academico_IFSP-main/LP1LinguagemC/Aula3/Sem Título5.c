#include <stdio.h>

int main(){
	float r,c,total;
	
	printf("Valor investido por Carlos: ");
	scanf("%f", &c);
	printf("Valor investido por Rafael: ");
	scanf("%f", &r);
	total = r + c;
	printf("\nCarlos merece %.0f%% do premio", (c/total)*100.0);
	printf("\nRafael merece %.0f%% do premio", (r/total)*100.0);
	return 0;
}
