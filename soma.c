#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);

    int n3 = 0;        // inicializei o contador de n3
    int num = 0;        // inicializei o num
    while (num < n){    // num tem que ser menor ou = n, nesse caso é menor pq o contador (num) começa em 0; 

        int n2;
        scanf("%d", &n2);
        n3 += n2;           // aqui tem a soma dos scan f's guardando eles na variável n3 que está em 0, repetindo até num ser menor que  num;
        num++;  //          // atualização do num acrescentando um na variável, até satisfazer a condição do while.
    }

    printf ("%d\n", n3);        // printando a soma do scanf. 


  return 0;
}

