#include "main.h"
/**
* main - prints alphabets
* Description: prints lowercased alphabets
* Return: always 0 (successful)
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
/**
* print_alphabet - prints letters
* Description: display small letters
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}
