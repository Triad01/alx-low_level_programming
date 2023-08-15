#include "main.h"
/**
* _islower - prints 1 or 0
* @c: first operand
*
* Description: prints i for lower and 1 for lowercased letters
* Return: always 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
