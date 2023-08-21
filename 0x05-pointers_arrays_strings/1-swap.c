#include "main.h"
/**
* swap_int - swap the position of two integers
* @a: first integer
* @b: second integer
* Return: always return 0
*/
void swap_int(int *a, int *b)
{	
	int c = *a;
	*a = *b;
	*b = c;
}
