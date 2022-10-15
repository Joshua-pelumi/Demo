#include <stdio.h>

/**
 * main - calls other functions
 * 
 * pritns numbers from 1-10 and their squares
 * 
 * Return 0
 * 
*/

int main(void)
{
    int n,m;
    printf("Table of numbers and their squares\n");
    printf("n   n^2\n\n");

    for ( n = 1; n <= 10; n++)
    {
        m = n*n;
        printf("%2i  %i\n",n ,m);
    }
    
    return 0;
}