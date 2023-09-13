#include <unistd.h>
/**
* _putchar - prints charactier to stdout
* @c: character to be printed
* Return: always 0 (successful)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
