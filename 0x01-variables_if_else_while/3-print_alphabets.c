#include <stdio.h>
/**
* main - to print letters to stdout
* Description: prints letters in small case
* Return: always return 0 (successfull)
*/
int main(void)
{
	char small_letters, big_letters;

	for (small_letters = 'a'; small_letters <= 'z'; small_letters++)
		putchar(small_letters);
	for (big_letters = 'A'; big_letters <= 'Z'; big_letters++)
	{
		putchar(big_letters);
	}
		putchar('\n');
		return (0);
}
