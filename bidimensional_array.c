
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int integerArray[4][5];
int j, i;
    
    // print all the elements in the bidimensional array //
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            integerArray[i][j] = (i + j);
            printf( "the elements of the array are : %i \n", integerArray[i][j]);
        }
    }
    return(0);
}