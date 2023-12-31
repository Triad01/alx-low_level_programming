#include "main.h"

/**
* puts_half - Prints the second half of a string
* @str: The string to print
*/
void puts_half(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
		length++;

	for (i = (length + 1) / 2; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
