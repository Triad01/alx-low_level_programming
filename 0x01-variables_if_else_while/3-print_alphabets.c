#include <stdio.h>
/**
* main - prints letters to  stdout
* Description: prints letters in letters in lowercase
* Return: always 0 (successful)
*/

int main(void)
{
	char letters[] = 'abcdefghijklmnopqrstuvwzyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
	int i;

	for (i = 0; letters[i] != '\0'; i++)
	{
		putchar(letters[i]);
	}
		putchar(0);
		return (0);

}

