#include "main.h"
/**
* _strlen_recursion - prints the length of a string
* @s: pointer argument
* Return: always 0;
*/
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (0);
	length = 1 + _strlen_recursion(s + 1);
	return (length);

}
