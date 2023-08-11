#include <stdio.h>
/**
* main - prints letters to stdout
* Description: prints letters in reverse order
* Return: always return 0 (successful)
*/
int main(void)
{
	char letters;

	for (letters = 'z'; letters <= 'a'; letters--)
	{
		putchar(letters);
	}
		putchar('\n');
		return (0);
}
