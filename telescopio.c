#include <stdio.h>
int main()
{
    int a, n;
    scanf("%d", &a);
    scanf("%d", &n);

    int linhas = 0;
    int f;

    int guardarf = 0;
    int contadorf = 0;

    while (linhas < n)
    {

        scanf("%d", &f);
        linhas++;

        guardarf = a * f;
        
        if (guardarf >= 40000000)
        {
            contadorf++;
        }
    }

    printf("%d", contadorf);
}