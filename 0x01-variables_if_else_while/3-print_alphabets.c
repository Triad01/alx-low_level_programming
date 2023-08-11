#include <stdio.h>
/**
* main - to print letters to stdout
* Description: prints letters in small case
* Return: always return 0 (successfull)
*/
int main(void)
{
	char small_letter, big_letter;

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
		putchar(small_letter);
	for (big_letter = 'A'; big_letter <= 'Z'; big_letter++)
	{
		putchar(big_letter);
	}
	return (0);
}
