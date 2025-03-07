#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that takes a random n integer and tells if it is positive, negative or equal to zero. 
 * @n: the random integer
 * Return: 0 for successful
 */

int main(void)
{
	int n; 

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	if( n > 0)
	{ 
		printf ("%d is positive\n", n);
	}
	if( n == 0)
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
