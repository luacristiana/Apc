#include <stdio.h>

int main (){
    int c1, c2, c3;
    int total;
    scanf("%d %d %d", &c1, &c2, &c3);
    scanf("%d", &total);

    if (total == c1 + c2 + c3){
        printf("Acertou\n");
    }

    else if ( total != c1 + c2 + c3){
        printf ("Errou\n");
    }
    return 0;
}