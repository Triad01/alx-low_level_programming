#include "main.h"

/**
 * wildcmp - Compare two strings with wildcard support.
 * @s1: The first input string.
 * @s2: The second input string with possible wildcards.
 *
 * Return: 1 if identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}

