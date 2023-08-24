#include <stdio.h>
#include <string.h>
/**
* print_hex - prints hex
* @str: argument
* Return: void
*/

void print_hex(const char *str)
{
	unsigned char *p = (unsigned char *)str;
	size_t i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		printf("%02x ", p[i]);
	}
	printf("\n");
}
/**
* main - main function
* Return: always 0
*/
int main(void)
{
	const char *str = "This is a string!";
	printf("%s\n", str);
	printf("---------------------------------\n");
	print_hex(str);

	return (0);
}
