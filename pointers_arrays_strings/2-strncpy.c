/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If less than n bytes were copied, fill the rest with null bytes */
	for (; i < n; i

