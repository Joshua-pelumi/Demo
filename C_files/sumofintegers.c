#include <stdio.h>

/**
 * main - calls other functions
 * 
 * Calculates the sum of integers of a number
 * Return o
*/

int main(void)
{
    int t,n,sum,remainder;

    printf("Enter a number\n ");
    scanf("%d", &n);
    t=n;
    sum =0;
    do
    {
        remainder = t % 10;
        sum += remainder;
        t = t/10;
    }
    while (t != 0);
    printf("The sum of the digits of %i is %i ", n ,sum);

    return 0;
}