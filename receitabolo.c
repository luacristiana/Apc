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

int main (){

    int a, b, c, ar, br, cr, caker;
    scanf("%d %d %d", &a, &b, &c);

    ar = a / 2;       // aqui coloquei o calculo da quantidade de ingredientes das pessoas, dividindo pela quantidade minina de ingredientes para fazer o bolo
    br = b / 3;
    cr = c / 5;
 
    // aqui eu utilizei minha função ja definida no começo do codigo
    caker = defineMenor(defineMenor(ar, br), cr); // aqui eu defini primeiro qual dos resultados de ar e br era menor, depois
    // .. depois eu defini quem era o menor entre o resultado do primeiro define e o terceiro valor: cr. 
    printf("%d\n", caker);

    return 0;
}