#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - converts binary to unsigned int
* @b: pointer to string of 0 and 1 characters
* Return: unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int my_result;
	int counter = 0;

	my_result = 0;

	if (b == NULL)
		return (0);
	while (b[counter] != '\0')
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);

		my_result = my_result * 2 + (b[counter] - '0');
		counter++;
	}
	return (my_result);
}
