#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - prints name to stdout
* @name: name to be printed
* @f: function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
