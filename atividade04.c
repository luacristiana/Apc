#include <stdio.h>

int main() {
    
    int t1, t2, t3, t4, soma;

    printf("Escreva os Ts com espaco entre eles: ");
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    soma = t1 + t2 + t3 + t4 - 3;

    printf("%d", soma);
    return 0;
    
}