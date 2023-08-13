#include <stdio.h>
/**
* main - print numbers to stdout
* Description: print different combo of three numbers
* Return: always 0 (successful)
*/
int main(void)
{
	for (int i = 0; i < 8; i++)
		{
			for (int j = i + 1; j < 9; j++)
			{
				for (int k = j + 1; k < 10; k++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i < 7 || (j < 8 && k < 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	putchar('\n');
	return (0);
}

