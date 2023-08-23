#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The input string to be encoded.
*
* Return: A pointer to the modified string.
*/
char *leet(char *str)
{
	char leet_map[10] = {'o', 'l', '\0', 'e', 'a', '\0', 't', 'L', '\0', 'T'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_map[j] || str[i] == leet_map[j] - 32)
			{
				str[i] = j + '0';
				break;
			}
		}
	}

	return (str);
}

