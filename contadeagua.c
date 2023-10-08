#include <stdio.h>

int main(){
    int N, calculoFa, calculoFb, calculoFc;

    scanf("%d", &N);

    
    calculoFa = 7 + ((N - 10) * 1);
    calculoFb = 27 + ((N - 30) * 2);
    calculoFc = 167 + ((N - 100) * 5);

    if (N <= 10) {
        printf("7\n");
        }else if(N > 10 && N <= 30){
        printf("%d\n",calculoFa);
    }else if(N > 30 && N <= 100){
        printf("%d\n",calculoFb);
    }else if(N > 100 ){
        printf("%d\n",calculoFc);
    }

    return 0;
}