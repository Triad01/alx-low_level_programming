#include "main.h"
/**
* main - prints test to stdout
* Description: prints _putchar
* Return: always 0
*/
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
