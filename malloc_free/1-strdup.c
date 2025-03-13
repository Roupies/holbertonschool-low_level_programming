#include <stdlib.h>
#include "main.h"

/**
 * strdup - function that returns a pointer whoch contact a copy of a string given as a parameter
 * @str: string to be copied
 * Return: dup as a pointer to the duplicated string
 */

char *_strdup(char*str)
{
	unsigned int i = 0;
	char *dup;

	if (str == 0)
	{
		return(NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc(i * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
return (dup);
}
