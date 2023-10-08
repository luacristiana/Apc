#include <stdio.h>
#include <limits.h>

int main(){

    int maior = INT_MIN; // -2147483648    2^32 / 2  positiva e metade negativa
    int n;
    int resultado = scanf("%d", &n);

    while ( resultado == 1){
        if ( n >= maior ){
            maior = n;
        }

       resultado = scanf("%d", &n);
    }

    printf("%d\n", maior);

    return 0;
}
