#include <limits.h>

/**
 * _atoi - convert string to int
 * @s: string pointer
 * Return: converted int
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int found_digit = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			if (result > INT_MAX / 10 ||
					(result == INT_MAX / 10 &&
					 s[i] - '0' > INT_MAX % 10))
				return ((sign == 1) ? INT_MAX : INT_MIN);
			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break;
		i++;
	}

	return ((result * sign));
}

