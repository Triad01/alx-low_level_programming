#include "main.h"

/**
* rot13 - Encodes a string using rot13.
* @s: The input string to be encoded.
*
* Return: A pointer to the modified string.
*/
char *rot13(char *s)
{
	char *ptr = s;
	int i;
	char letter;
	char start_lowercase = 'a';
	char start_uppercase = 'A';

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				letter = start_lowercase;
			}
			else
			{
				letter = start_uppercase;
			}

			i = 0;
			while (i < 13)
			{
				if (letter == 'z' + 1)
				{
					letter = 'a';
				}
				else if (letter == 'Z' + 1)
				{
					letter = 'A';
				}
				letter++;
				i++;
			}

			*ptr = letter - 1;
		}
		ptr++;
	}

	return (s);
}

