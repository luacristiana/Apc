#include <stdio.h>

int main() {
    int N, C; // Número de leituras e capacidade máxima
    scanf("%d %d", &N, &C);

    int pessoasNoElevador = 0; // Inicialmente, o elevador está vazio
    int capacidadeExcedida = 0; // Variável para rastrear se a capacidade foi excedida

    int i = 0; // Contador para as leituras

    while (i < N) {
        int S, E; // Pessoas que saíram e entraram no andar atual
        scanf("%d %d", &S, &E);

        // Atualize a quantidade de pessoas no elevador
        pessoasNoElevador -= S; // Pessoas que saíram
        pessoasNoElevador += E; // Pessoas que entraram

        // Verifique se a capacidade máxima foi excedida
        if (pessoasNoElevador > C) {
            capacidadeExcedida = 1; // Capacidade máxima excedida
            break; // Sai do loop
        }

        i++; // Incrementa o contador de leituras
    }

    // Imprima o resultado com base na variável "capacidadeExcedida"
    if (capacidadeExcedida) {
        printf("S\n"); // Capacidade máxima excedida
    } else {
        printf("N\n"); // Capacidade máxima não foi excedida
    }

    return 0;
}
