#include "main.h"
/**
* puts_half - prints half the characters
* @str: argument
* Return: always 0
*/
void puts_half(char *str)
{
	int i, start;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	start = (i - 1) / 2 + 1;
	while (str[start != '\0'])
	{
		_putchar(str[start]);
		start++;
	}
}
