#include <stdio.h>

int main() {
    int n;
    
    // Passo 1: Ler o número natural n da entrada
    scanf("%d", &n);
    
    int linha = 1;
    
    // Passo 2: Usar um loop while para controlar o número de linhas na pirâmide
    while (linha <= n) {
        int espaco = 1;
        
        // Passo 3: Imprimir espaços em branco antes dos asteriscos
        while (espaco <= n - linha) {
            printf(" ");
            espaco++;
        }
        
        int asterisco = 1;
        
        // Passo 4: Imprimir os asteriscos
            while (asterisco <= (2 * linha) - 1) {
            printf("*");
            asterisco++;
        }
        
        // Passo 5: Imprimir uma quebra de linha para passar para a próxima linha
        printf("\n");
        
        linha++; // Avança para a próxima linha
    }
    
    return 0;
}