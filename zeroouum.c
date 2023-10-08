#include <stdio.h>

int main(){
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if( A + B + C == 1){   // a soma dos tres se resultar em 1, quer dizer que há um vencedor que colocou 1
        if (A == 1){printf("A\n");}
        if (B == 1){printf("B\n");}
        if (C == 1){printf("C\n");}
    }

    else if(A + B + C == 2){ //a soma der 2 quer dizer que o vencedor colocou 0
        if (A == 0){printf("A\n");}
        if (B == 0){printf("B\n");}
        if (C == 0){printf("C\n");}
    }

    else {
        printf("empate");
    }

    return 0;
}
