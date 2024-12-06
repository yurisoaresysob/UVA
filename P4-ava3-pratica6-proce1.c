#include <stdio.h>
#include <stdlib.h>

#define PRODUTOS 5

typedef struct
{
  char codigo;
  char nome[20]; 
  float preco;
  int quant;
  float totalArrecadado;
}Produto;

void exibirMenu(Produto produtos[])
{	
	printf("\n--Menu de Produtos --\n");
	for(int i=0;i<PRODUTOS;i++)
	{
		printf("%c - %s: R$ %.2f \n",
			produtos[i].codigo,
			produtos[i].nome,
			produtos[i].preco);	
	}
	
	printf("X-> SAIR\n"); 
	printf("----------------------\n"); 
}

void exibirRelatorio(Produto produtos[])
{
	float totalArrecadado=0;
	printf("\n--Relatório de Vendas --\n");

	for(int i=0;i<PRODUTOS;i++)
	{
		printf("%c - %s: R$ %.2f %d\n",
			produtos[i].codigo,
			produtos[i].nome,
			produtos[i].preco,
			produtos[i].quant);	
		totalArrecadado+=produtos[i].preco*produtos[i].quant;
	}
	printf("TOTAL: %.2f\n",totalArrecadado); 
	printf("----------------------\n"); 
}

void main()
{
	Produto produtos[PRODUTOS]={
		{'A',"Refrigerante",3.50,0,0.0},
		{'B',"Casquinha Simples",4.00,0,0.0},
		{'C',"Casquinha Dupla",5.50,0,0.0},
		{'D',"Sundae",7.50,0,0.0},
		{'E',"Banana Split",9.00,0,0.0}};

	
	int totalVendas=0;
	char prod;
	int quant;

	while(1){
		exibirMenu(produtos);

		printf("\nEscolha o item: ");
		scanf(" %c",&prod);
	
		printf("\nEscolha a quantidade: ");
		scanf("%d",&quant);
		
		if(prod=='A')
			produtos[0].quant+=quant;
		else if(prod=='B')
			produtos[1].quant+=quant;
		else if(prod=='C')
			produtos[2].quant+=quant;
		else if(prod=='D')
			produtos[3].quant+=quant;
		else if(prod=='E')
			produtos[4].quant+=quant;
		else if(prod=='X')
		{
		    exibirRelatorio(produtos);
			exit(0);
		}
		else
			printf("Produto inválido!!!\n");
	}
	
}
  
