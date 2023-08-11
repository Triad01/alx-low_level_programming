#include <stdio.h>
/**
* main - prints letters to  stdout
* Description: prints letters in letters in lowercase
* Return: always 0 (successful)
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
	return (0);
}

