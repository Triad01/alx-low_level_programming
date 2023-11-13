#include "main.h"
/**
* _strncat - Concatenates two strings using at most n bytes from src.
* @dest: The destination string to which src will be appended.
* @src: The source string to be appended to dest.
* @n: The maximum number of bytes to append from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}
	*dest_end = '\0';

	return (dest);
}

