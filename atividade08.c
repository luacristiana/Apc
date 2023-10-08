#include <stdio.h>
 
int main() {
     // Calcular a quantidades de conteiners no navio

    int A, B, C;
    int X, Y, Z;
    int calculo;
    
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d %d", &X, &Y, &Z);

    // dividir cada carea pela area do navio
    // total de conteiners no piso (X/A) * (Y/B)
    // calcular o total de conteineres inteiros empilhados: (X/A) * (Y/B) * (Z/C)

    calculo = (X/A) * (Y/B) * (Z/C);
    
    printf("%d\n", calculo);
    return 0;

}
