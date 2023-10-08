#include <stdio.h>
#include <stdlib.h>

int main (void){    
    int a, b, soma;

    printf("Digite um valor: ");
    scanf("%d",&a);  //Guardei a informação da variavel a pedida no print f//

    printf("Outro valor: ");
    scanf("%d", &b);

    soma = a + b;
    printf("O valor da soma = %d\n", soma); //chamei na tela novamente as infos de soma// 
 
    system("pause");// utilizado somente no windows, evitar que a pagina feche depois de rodar// 
    return 0;


    int t1, t2, t3, t4, soma;
    printf("");
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    //printf(" ");
    //scanf("%d", &t2);

    // printf(" ");
    //scanf("%d", &t3);

    //printf(" ");
    // scanf("%d", &t4);
    
    soma = t1 + t2 + t3 + t4 - 3;

    printf("%d", soma);

}
