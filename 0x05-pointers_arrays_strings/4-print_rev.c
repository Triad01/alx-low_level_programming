#include "main.h"
/**
* print_rev - prints strings in reverse order
* @s: argument
* Return: 0 (always successful)
*/
void print_rev(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
