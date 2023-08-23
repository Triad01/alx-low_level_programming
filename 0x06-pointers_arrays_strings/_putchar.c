#include "main.h"
#include <unistd.h>
/**
* _putchar - prints output to stdout
* @c: character to print
* Return: always 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
