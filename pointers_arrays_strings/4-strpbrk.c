#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function replica of strpbrk, searches for any of a set of bytes.
 * @s: string to analyze
 * @accept: string containing the characters to search for
 * Return: a pointer to the first matching character in s if found.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
