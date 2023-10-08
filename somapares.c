#include <stdio.h>

int main() {
    int soma = 0;
    int impar = 0;
    int numero;

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            soma += numero;
        }

         if (numero % 2 == 1) {
            impar += numero;
        }
    }

    printf("%d %d\n", soma, impar);

    return 0;
}