#include "main.h"
/**
 * rev_string - reverses a string
 * @s: argument
 * Return: always 0 (successful)
 */
void rev_string(char *s)
{
	int start, end, length;
	char temp;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (start = 0, end = length - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

