#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, j;
    float notas[3][2];
    float media[2];
    float somaNotas;

    for (i = 0; i < 2; i++)
    {

        printf("%i semestre \n ", i + 1);

        for (i = 0; i < 3; j++)
        {

            printf("digite a %i nota \n ", j + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }

        media[i] = somaNotas / 3;
    }

    for (i = 0; i < 2; i++)
    {

        printf("%i semestre \n ");
    }

    return 0;
}