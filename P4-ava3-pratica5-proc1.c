#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[50];
    int i, soma = 0, quantNove = 0, maiorValor = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor e coleta informações
    for (i = 0; i < 50; i++) {
        // Gera valor entre 0 e 20
        vetor[i] = rand() % 21;
        soma += vetor[i];

        if (vetor[i] == 9) {
            quantNove++;
        }

        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
    }

    // Exibe a soma de todos os valores
    printf("Soma dos valores do vetor: %d\n", soma);

    // Exibe o número de ocorrências do valor 9
    printf("Quantidade de vezes que o 9 aparece: %d\n", quantNove);

    // Exibe o maior valor armazenado no vetor
    printf("Maior valor encontrado no vetor: %d\n", maiorValor);

    // Exibe as posições onde o maior valor aparece
    printf("Posicoes do maior valor: ");
    for (i = 0; i < 50; i++) {
        if (vetor[i] == maiorValor) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
