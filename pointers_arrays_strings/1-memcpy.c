#include "main.h"

/**
 * _memcpy - function replica of memsetn, copies memory area
 * @dest: destination
 * @src: source file
 * @n: number of bytes to be copied
 * Return: dest if it is successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
