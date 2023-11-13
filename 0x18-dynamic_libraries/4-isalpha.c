#include "main.h"
/**
* _isalpha - checks for alphabetic charactier
* @c: first argument
*
* Description: checks characters
* Return: always return 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		return (0);
	return (0);
}
