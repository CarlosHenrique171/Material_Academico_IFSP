#include <stdio.h>

//criando a struct
struct pessoa{
	char nome[100];
	int idade;
	char sexo;
	char email[50];
};

int main(){
	
	//criando um arquivo
	
	FILE *arquivo;
	arquivo = fopen("arquivo_struct.txt", "a");
	
	struct pessoa p[20];
	
	int i=0,a,condicao=1;
	
	while(condicao==1){
	
	printf("Nome: ");
	gets(p[i].nome);
	
	printf("Email: ");
	gets(p[i].email);
	
	printf("Idade: ");
	scanf("%d", &p[i].idade);
	
	printf("Sexo: ");
	fflush(stdin);
	scanf("%c", &p[i].sexo);
	fflush(stdin);
	printf("Deseja incluir mais pessoas? (1- sim 0 - nao): ");
	scanf("%d",&condicao);
	fflush(stdin);
	i++;
	}//fim do while
	
	//printando na tela
	for(a=0;a<i;a++){
		printf("Nome: %s \nEmail: %s \nIdade: %d \nSexo: %c\n",p[a].nome,p[a].email,p[a].idade,p[a].sexo);
		fprintf(arquivo,"Nome: %s \nEmail: %s \nIdade: %d \nSexo: %c\n",p[a].nome,p[a].email,p[a].idade,p[a].sexo);
	}
	fclose(arquivo);
}
