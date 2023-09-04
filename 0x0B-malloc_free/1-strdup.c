#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns pointer to a newly allocated space in memory
* @str: pointer
* Return: pointer
*/
char *_strdup(char *str)
{
	int i;
	char *ptr;

	ptr = (char *) malloc(*str * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return ("failed to allocate memory\n");
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}