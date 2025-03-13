#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Description: This function concatenates s1 and the first n bytes of s2.
 * If n is greater or equal to the length of s2, the entire s2 is used.
 * If NULL is passed for s1 or s2, it is treated as an empty string.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         Returns NULL if the allocation fails.
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
