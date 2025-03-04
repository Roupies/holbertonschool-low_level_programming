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
unsigned int j;

for (i = 0; i < n; i++)
	for (j = 0; j < n; j++)
	{
		src[j] = dest[i];
	}
return (dest);
}
