#include <stdio.h>

int ehBissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}

int diasNoMes(int mes, int ano) {
    // Janeiro=31, Fevereiro=28(ou29), Março=31, Abril=30, Maio=31, Junho=30,
    // Julho=31, Agosto=31, Setembro=30, Outubro=31, Novembro=30, Dezembro=31.
    int diasPorMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes == 2 && ehBissexto(ano)) {
        return 29;
    }
    return diasPorMes[mes-1];
}

int converteDataParaDias(int d, int m, int y) {
    int totalDias = 0;
    int i;

    // Soma dias dos anos anteriores completos
    for (i = 1; i < y; i++) {
        totalDias += (ehBissexto(i) ? 366 : 365);
    }

    // Soma dias dos meses anteriores do mesmo ano
    for (i = 1; i < m; i++) {
        totalDias += diasNoMes(i, y);
    }

    // Soma o dia do mês atual
    totalDias += d;

    return totalDias;
}

int main() {
    int d1, m1, y1, d2, m2, y2;

    while (1) {
        printf("Digite a primeira data (dd mm aaaa): ");
        scanf("%d %d %d", &d1, &m1, &y1);

        // Se o dia for zero, encerra a entrada
        if (d1 == 0) {
            break;
        }

        printf("Digite a segunda data (dd mm aaaa): ");
        scanf("%d %d %d", &d2, &m2, &y2);

        // Converte as datas em dias
        int diasData1 = converteDataParaDias(d1, m1, y1);
        int diasData2 = converteDataParaDias(d2, m2, y2);

        int diferenca = diasData2 - diasData1;

        printf("Número de dias entre as datas: %d\n", diferenca);
    }

    printf("Finalizando...\n");
    return 0;
}
