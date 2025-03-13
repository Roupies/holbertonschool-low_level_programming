#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings with limited bytes from s2
 * @s1: First string (treated as empty if NULL)
 * @s2: Second string (treated as empty if NULL)
 * @n: Maximum bytes to use from s2
 *
 * Return: Newly allocated concatenated string, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, copy_len, total_len;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	copy_len = (n >= len2) ? len2 : n;

	total_len = len1 + copy_len + 1;

	new_str = malloc(total_len);
	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, s1);
	memcpy(new_str + len1, s2, copy_len);
	new_str[len1 + copy_len] = '\0';

	return (new_str);
}
