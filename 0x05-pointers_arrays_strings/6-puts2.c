#include "main.h"
/**
* puts2 - prints characters of a string
* @str - string passed as an argument
* Return: always 0 (successful)
*/

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
