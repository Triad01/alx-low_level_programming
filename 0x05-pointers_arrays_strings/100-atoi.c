#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign, to, i;

	sign = 1;
	to = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (to > INT_MAX / 10 || (to == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			to = to * 10 + (s[i] - '0');
		}
		else if (to != 0)
		{
			break;
		}

		i++;
	}
	return (to * sign);
}

