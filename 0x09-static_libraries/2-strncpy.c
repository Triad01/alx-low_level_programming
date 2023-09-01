#include "main.h"

/**
 * _strncpy - Copies up to n bytes of the src string to dest.
 * @dest: The destination string where src will be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

