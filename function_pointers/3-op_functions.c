#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b))
	{
		fprintf(stderr, "Error: Integer overflow\n");
		exit(100);
	}
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Difference between a and b
 */
int op_sub(int a, int b)
{
	if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b))
	{
		fprintf(stderr, "Error: Integer overflow\n");
		exit(100);
	}
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	if ((a > 0 && ((b > 0 && a > INT_MAX / b) || (b < 0 && a > INT_MIN / b))) ||
			(a < 0 && ((b > 0 && a < INT_MIN / b) || (b < 0 && a < INT_MAX / b)))) 
	{
		fprintf(stderr, "Error: Integer overflow\n");
		exit(100);
	}
	return a * b;
}

/**
 * op_div - Divides two integers
 * @a: Numerator
 * @b: Denominator
 *
 * Return: Result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0 || (a == INT_MIN && b == -1))
	{
		fprintf(stderr, "Error: Division by zero or overflow\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes the modulo of two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		exit(100);
	}
	return (a % b);
}


