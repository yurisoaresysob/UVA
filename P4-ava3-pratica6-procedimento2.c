#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main() {
	int linhas, colunas, nJogadas;
	char tabuleiro[MAX][MAX];

	printf("Digite número de linhas e colunas do tabuleiro: ");
	scanf("%d %d",&linhas,&colunas);

	printf("Digite o tabuleiro (linha por linha): ");
	for(int i=0;i<linhas;i++)
		scanf("%s",tabuleiro[i]);
	
	printf("Digite o número de jogadas: ");
	scanf("%d",&nJogadas);

	int x,y;
	int acertos=0;
	int fd=0,cd=0,sd=0;
	
	for(int i=0;i<nJogadas;i++)
	{
		printf("Digite a coordenada x e y\n");
		scanf("%d %d",&x,&y);
		x--;
		y--;
		if(tabuleiro[x][y]=='f')
			fd++;
		if(tabuleiro[x][y]=='c')
			cd++;
		if(tabuleiro[x][y]=='s')
			sd++;		
	}

	printf("Relatório\n");
	printf("Cruzadores abatidos: %d\n",cd);
	printf("Submarinos abatidos: %d\n",sd);
	printf("Fragatas abatidas: %d\n",fd);
	printf("Acertos: %d\n",cd+fd+sd);	
}
