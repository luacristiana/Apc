#include <stdio.h>

int defineMenor(int x, int y){  // Defini que entrarão dois valores x e y, que posteriormente será ar e br (mas poderia ser qualquer coisa)

    if (x < y){                 // se x for menor que y
        return x;               // vai retornar x
    }
    else if (x == y){           // se x for igual a y, retorará x ou y, nesse caso escolhi x
        return x;
    }
    else {
        return y;               //caso não, vai setornar y como sendo menor
    }
}

int defineMaior(int x, int y){  // Defini que entrarão dois valores x e y, que posteriormente será ar e br (mas poderia ser qualquer coisa)

    if (x > y){                 // se x for menor que y
        return x;               // vai retornar x
    }
    else if (x == y){           // se x for igual a y, retorará x ou y, nesse caso escolhi x
        return y;
    }
    else {
        return y;               //caso não, vai setornar y como sendo menor
    }
}

int main (){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); 

    if (a > defineMenor(b,c) && a < defineMaior(b,c)){
        printf("%d\n", a);
    }

    if (b > defineMenor(a,c) && b < defineMaior(a,c)){
        printf("%d\n", b);
    }

    if (c > defineMenor(a,b) && c < defineMaior(a,b)){
        printf("%d\n", c);
    }
    return 0;
}