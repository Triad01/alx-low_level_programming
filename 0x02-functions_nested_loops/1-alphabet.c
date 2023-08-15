#include "main.h"
/**
* print_alphabet - prints alphabets
* Description: displays letters to stdout
* Return: always return void
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
