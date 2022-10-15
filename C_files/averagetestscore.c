#include <stdio.h>

/**
 * main - calls other function
 * 
 * Calculates average score and counts the number of failures for a given number of entries
*/

int main(void)
{
    int i,grade,numberOfGrade;
    int totalGrade =0;
    int failureCount = 0;
    float average;

    printf("How many times will you be entering? ");
    scanf("%i", &numberOfGrade);

    for(i=1; i<= numberOfGrade; ++i)
    {
        printf("Grade #%i: ",i);
        scanf("%i", &grade);
        totalGrade = totalGrade + grade;

        if (grade < 65)
        {
            ++failureCount;
        }
    }

    average = (float)totalGrade /numberOfGrade;

    printf("\n Average score = %.2f\n", average);
    printf("Number of failures = %i\n", failureCount);

    return 0;
}