#include "main.h"
/**
* _puts - prints string followed by new line to stdout
* @str: argument
* Returnf: always 0 (successful)
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
