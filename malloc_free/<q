#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer whoch contact a copy of a string given as a parameter
 * @str: string to be copied
 * Return: dup as a pointer to the duplicated string
 */

char *_strdup(char*str)
{
	unsigned int i, j = 0;
	char *dup;

	if (str == NULL)
	{
		return(NULL);
	}
	while (str[j] != '\0')
	{
		i++;
	}
	dup = malloc((j + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= j; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
