#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int values[] = { 1, 2, 3, 4, 5, 6};  
    int i = 0;
    int result = 1;
    int m;
    int n = 1;
    int j;

    // find the multiplication of of each elemnt of the array//
    while(values[i] !='\0')
    {   
    result = result * values[i];
    printf("the result is %i \n ", result);
    i++;
    }  
    printf("the final result is  %i \n ", result);
    
    // find the max elemnt in array //
    for (n = 1; values[n] !='\0'; n++)
    {
        if (values[0]  < values[n])
            values[0] = values[n];
    }
    printf( "the max value of array is : %i \n", values[0]);

    return (0);
}