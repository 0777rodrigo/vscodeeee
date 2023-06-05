#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float i, numero[5], numeroMaior, numeroMenor;

    for (i = 0; i < 5; i++)
    {

        printf("digite o numero \n");
        scanf("%f", &numero[i]);
    }

    if (numero > numeroMaior)
    {
        numeroMaior = numero;
    }

    printf("maior numero");
    {
    }
    if (numero < numeroMenor)
    {
        numeroMenor = numero;
    }

    printf("menor numero");
    {

        printf("menor numero %f \n ", numeroMenor);
        printf("maior numero %f \n ", numeroMenor);
    }
    return 0;
}