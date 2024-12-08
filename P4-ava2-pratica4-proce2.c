// Urso - Prática 4 - Ex2
#include <stdio.h>
#include <stdlib.h>

#define ARVORES 100
#define TENTATIVAS 5

int main() {
    int posicao_urso, tentativa, contador_tentativas = 0;

    // Jogador 1 escolhe a árvore
    printf("Jogador 1 - Escolha a árvore para esconder o urso (1 a %d): ", ARVORES);
    scanf("%d", &posicao_urso);

    if (posicao_urso < 1 || posicao_urso > ARVORES) {
        printf("Posição inválida!\n");
        return 0;
    }

    // Jogador 2 tenta adivinhar
    printf("Jogador 2 - Você tem %d tentativas para adivinhar a posição do urso (1 a %d):\n", TENTATIVAS, ARVORES);

    while (contador_tentativas < TENTATIVAS) {
        printf("Tentativa %d: ", contador_tentativas + 1);
        scanf("%d", &tentativa);

        if (tentativa < 1 || tentativa > ARVORES) {
            printf("Posição inválida!\n");
        } else if (tentativa == posicao_urso) {
            printf("Parabéns! Você encontrou o urso na árvore %d!\n", posicao_urso);
            return 0;
        } else {
            if (tentativa < posicao_urso) {
                printf("O urso está numa árvore de número maior!\n");
            } else {
                printf("O urso está numa árvore de número menor!\n");
            }
        }

        contador_tentativas++;
    }

    // Se chegar aqui, esgotou as tentativas sem acertar
    printf("Acabaram suas tentativas! O urso estava na árvore %d.\n", posicao_urso);

    return 0;
}
