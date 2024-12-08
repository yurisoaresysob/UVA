#include <stdio.h>

int main() {
    // Vetor com os 12 signos, índice correspondendo ao ano % 12
    const char *signos[12] = {
        "Macaco",   // índice 0
        "Galo",     // índice 1
        "Cão",      // índice 2
        "Porco",    // índice 3
        "Rato",     // índice 4
        "Boi",      // índice 5
        "Tigre",    // índice 6
        "Coelho",   // índice 7
        "Dragão",   // índice 8
        "Serpente", // índice 9
        "Cavalo",   // índice 10
        "Carneiro"  // índice 11
    };

    // Vetor com anos de nascimento (exemplo)
    // Aqui você pode colocar os anos da sua família
    int anosFamilia[] = {1990, 1976, 2003, 1987, 2010};
    int quantidade = sizeof(anosFamilia) / sizeof(anosFamilia[0]);

    // Para cada ano no vetor anosFamilia, calcular o signo
    // e imprimir o resultado
    for (int i = 0; i < quantidade; i++) {
        int ano = anosFamilia[i];
        int indiceSigno = ano % 12; // Descobre qual é o signo
        printf("Ano de nascimento: %d -> Signo: %s\n", ano, signos[indiceSigno]);
    }

    return 0;
}
