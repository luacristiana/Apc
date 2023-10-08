#include <stdio.h>

int main(){
    int Xo, Yo, X1, Y1;
    int X2, Y2, X3, Y3;

    scanf("%d %d %d %d",&Xo , &Yo, &X1, &Y1);  // eixos x e y do retandulo um e dois
    scanf("%d %d %d %d",&X2 , &Y2, &X3, &Y3);  // eixos x e y do retangulo 3 e quatro

    if (Y1 >= Y2 && X1 >= X2 && X3 >= Xo && Y3 >= Yo){    // o raciocinio se da pela seguinte forma: para a colisão dos retangulos
    // é preciso que os eixos se conectem no sentido paralelo, então
    // os eixos x0 e y0 tem que ser menor ou igual ao eixo x3 e y3 (são paralelos), 
    // ja os eixos x1 e y1 tem que ser maiores que o eixo x2 e y2.
        printf("1\n");} else if (X3 <= Xo && Y3 <= Yo && Y1 <= Y2 && X1 <= X2) {
        printf ("0\n");
        } else {
            printf("0\n");
        }
    return 0;
    }
