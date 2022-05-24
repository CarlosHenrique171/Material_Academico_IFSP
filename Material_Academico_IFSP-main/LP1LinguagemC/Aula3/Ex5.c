#include <stdio.h>

int main(){
	float r,c,f,total,premio=2000000.0;
	
	printf("Valor investido por Carlos: ");
	scanf("%f", &c);
	printf("Valor investido por Rafael: ");
	scanf("%f", &r);
	printf("Valor investido por Flavio: ");
	scanf("%f", &f);
	total = r + c+ f;
	printf("\nCarlos merece R$ %.2f", (c/total)*premio);
	printf("\nRafael merece R$ %.2f", (r/total)*premio);
	printf("\nFlavio merece R$ %.2f", (f/total)*premio);
	return 0;
}
