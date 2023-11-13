#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The string containing the accepted characters
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int char_found;
	char *a;

	while (*s != '\0')
	{
		char_found = 0;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				char_found = 1;
				break;
			}
		}

		if (char_found)
		{
			length++;
			s++;
		} else
		{
			break;
		}
	}

	return (length);
}

