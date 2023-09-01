#include "main.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string
* @s: first parameter
* @c: second parameter
* Return: always 0 (successful)
*/
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0')
		return ((char *)s);
	return (NULL);
}
