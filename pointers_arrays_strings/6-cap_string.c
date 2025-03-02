/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		capitalize_next =

