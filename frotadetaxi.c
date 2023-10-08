#include <stdio.h>  

int main()  {

    float A, G, Ra, Rg; 
    scanf("%f %f %f %f", &A, &G, &Ra, &Rg); 
    
    if (Ra / A > Rg / G )
    {
        printf ("A");
    }

     if (Ra / A < Rg / G )
    {
        printf ("G");

    }

    if(Ra / A == Rg / G )
    {
        printf ("G");
    }

    return 0;
}
