#include "main.h"
/**
* puts_half - prints half the characters
* @str: argument
* Return: always 0
*/
void puts_half(char *str)
{
	int length, start;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;
	while (str[start != '\0'])
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
