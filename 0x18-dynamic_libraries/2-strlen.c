#include "main.h"
/**
* _strlen - gets the length of a string
* @s: argument
* Return: always 0 (successful)
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);

}
