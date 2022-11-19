#include <stdio.h>
#include <math.h>

/**
 * main - calls other functions
 * 
 * Solves quadratic equations after the values of a,b and c has been inputted
 * It also checks for pythagorean triple
 * 
 *  NOT WORKING PROPERLY YET
*/

int main(void)
{
    char name;
    int a,b,c;
    int det_square;
    double f1,f2, determinant;
    int root1,root2;
    printf("Enter the first letter of your name \n");
    scanf("%c", &name);

    printf("Welcome %c\n\n", name);

    printf("With this programme, you can solve quadratic equtions as well as check for pythagorean triple\n");

    printf("Enter a= "); 
    scanf("%d", &a);
    printf("%i\n", a);


    printf("Enter b= ");
    scanf("%d", &b);
    printf("%d\n", b);

    printf("Enter c= ");
    scanf("%d", &c);
    printf("%d\n", c);

    det_square = (b*b - 4*a*c);
    determinant = sqrt(det_square);

    f1 = (-b + determinant);
    f2 = (-b - determinant);

    root1 = (f1/(2*a));
    root2 = (f2/(2*a));

    printf("The roots are x1 = %i and x2 = %i\n ", root1, root2);
    return 0;
}
