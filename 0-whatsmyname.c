#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The number of command line arguments (unused in this program)
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Suppress unused variable warning */
	printf("%s\n", argv[0]); /* Print the program name (with path if included) */
	return (0);
}

