#include <stdio.h>

int main (){

int L, D; 
int K, P; 
int calculo;


scanf("%d %d", &L, &D);


scanf("%d %d", &K, &P);

calculo = L*K; 
calculo += (L/D) * P;
printf("%d\n", calculo);

return 0; 
}

