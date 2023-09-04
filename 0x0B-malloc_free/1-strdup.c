#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - returns pointer to a newly allocated space in memory
* @str: pointer
* Return: pointer
*/
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = (char *) malloc(sizeof(char) * length + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		ptr[i] = str[i];
	return (ptr);
}
