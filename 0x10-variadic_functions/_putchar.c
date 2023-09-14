#include "variadic_functions.h"
#include <unistd.h>
/**
* _putchar - prints character to stdout
* @c: character to be printed out
* Return: always 0 (successful)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
