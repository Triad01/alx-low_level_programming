#include <stdio.h>
/**
* main - to print letters to stdout
* Description: prints letters in small case
* Return: always return 0 (successfull)
*/
int main(void)
{
	char small_letters;

	for (small_letters = 'a'; small_letters <= 'z'; small_letters++)
	{
		putchar(small_letters);
	}
		
		putchar('\n');
		return (0);
}
