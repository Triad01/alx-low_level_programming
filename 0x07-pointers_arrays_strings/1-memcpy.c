#include "main.h"
/**
* _memcpy - copy address from one memory to another
* @dest: first argument
* @src: second argument
* @n: third argument
* Return: always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
