#include <stdio.h>
#include <string.h>
/**
* main - prints text to stdout
* Description: prints lowercased texts without q
* Return: always return 0 (successuful)
*/
int main(void)
{
	char small_letters;

	for (small_letters = 'a'; small_letters <= 'z'; small_letters++)
	{
		if (small_letters != 'q' && small_letters != 'e')
			putchar(small_letters);
	}
		putchar('\n');
		return (0);
}
