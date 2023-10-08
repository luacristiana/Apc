#include <stdio.h>

int main (){
    int x; 

    scanf("%d", &x);          // variável de entrada que determina quantas linhas vão somar

    int linha = 0;
    int valormulti = 0;
    while (linha < x){

        int valor01, valor02;
        scanf("%d %d", &valor01, &valor02);
        valormulti += valor01 * valor02;
        linha++;
    }

    printf ("%d", valormulti);

    return 0;
}