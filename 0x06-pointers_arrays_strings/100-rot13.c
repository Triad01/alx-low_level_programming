#include "main.h"

/**
* rot13 - Encodes a string using rot13.
* @str: The input string to be encoded.
*
* Return: A pointer to the modified string.
*/
char *rot13(char *str)
{
	int i, j;
	char alphabt[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alphabt[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabt[j] != '\0'; j++)
		{
			if (str[i] == alphabt[j])
			{
				str[i] = rot13_alphabt[j];
				break;
			}
		}
	}

	return (str);
}
