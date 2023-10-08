#include <stdio.h>

int main (){

    int p, r; 
    scanf("%d %d", &p, &r);

    //chegou o primeiro lado da bolinha que era o lado esquerdo (fechando a porta esquerda)
    if (p == 0){            
        printf("C\n");
    }

    // checou o segundo lado da bolinha que era o lado direito (fechando a porta direita)
    if (p == 1){
        if (r == 1){
            printf("A\n");

        }

    // checou o segundo caminho que era o lado esquerdo (fechando a porta R a eaquerda)
        if (r == 0){
            printf("B\n");
        }
    }

    return 0;
}