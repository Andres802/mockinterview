#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Suma de Filas");

    int arreglo[3][4] =
    {
        {1,1,1,1},
        {2,2,2,2},
        {6,6,6,8}
    };

    int fila1=0, fila2=0, fila3=0,i,j;
    for (i = 0; i<3; i++)
    {
        for (j = 0; j<=3; j++)
        {
            if ( i == 0)
                fila1 = fila1 + arreglo[i][j];
            else if (i == 1)
                fila2 = fila2 + arreglo[i][j];
            else
                fila3 = fila3 + arreglo[i][j];
        }
    }
    printf("\nLa suma de fila 1: %i \n", fila1);
    printf("La suma de fila 2: %i \n", fila2);
    printf("La suma de fila 3: %i \n", fila3);
}
