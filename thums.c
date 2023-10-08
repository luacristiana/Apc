#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);   //numero de linhas 

    int i = 1;     //linhas contendo tumns

    while (i <= N) {

        if (i % 2 == 1) {
            printf("THUMS THUMS THUMS\n");
        } else {
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }

        i++;
    }

    return 0;
}


    


