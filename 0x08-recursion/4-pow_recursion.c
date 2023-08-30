#include "main.h"
/**
* _pow_recursion - prints the exponent value;
* @x: first argument
* @y: second argument
* Return: always 0 (successful)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
