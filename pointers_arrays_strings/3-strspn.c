#include "main.h"

/**
 * _strspn - function replica of strspn, gets the lengh of a prefix substring
 * @s: string to analyze
 * @accept: string containing the characters to match
 * Return: i for the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if	(accept[j + 1] == '\0')
				return (i);
		}
	s++;
}
return (i);
}
