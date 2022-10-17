#include <stdio.h>

/**
 * main - calls other functions
 *
 * A programme that generates up to 15 fibonacci numbers
 *
 * Returns 0 on success, ERROR on failure
 */

int main(void)
{
	int i,n;

	printf("Pls, Enter a number between 1-15 to generate fibonacci sequence ");
	scanf("%i", &n);
	
	int fibonacci[n];

	fibonacci[0] = 0; //By definition
	fibonacci[1] = 1; //By ditto
	
	if(n>1 && n<15)
	{
		for(i=2 ; i<n ; ++i)                                        {                                                                  fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];                                                                       printf("%i ", fibonacci[i]);

	printf("\n");
		} 
	} 

	else
		printf("ERROR. Pls, Enter correct format\n");

	return 0;
} 
