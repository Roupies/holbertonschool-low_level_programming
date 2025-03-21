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
	return (a * b);
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
	return (a % b);
}
