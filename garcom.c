#include <stdio.h>

int main(){

    int N;        
    int L, C;    
    int copoosquebrados = 0;
    scanf("%d", &N);

    int bandejas = 1;
    while (bandejas <= N){

        scanf ("%d %d", &L, &C);

          if (L > C){
            copoosquebrados += C;
        }

        bandejas++;
    }  
    printf("%d\n", copoosquebrados);

    return 0;
}
