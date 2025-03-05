#include "main.h"
#include <stddef.h>

/**
 * _strchr - function replica
 * @s: string where we will locate a character
 * @c: the character that we are looking for
 * Return: i for the first occurence of the character c if located, or NUL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{

			return (&s[i]);
		}
	}
	return (NULL);
}
