#include "main.h"

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0') {
		length++;
	}
	return (is_palindrome_recursive(s, 0, length - 1));
}
/**
 * is_palindrome_recursive - Helper function to check palindrome recursively.
 * @s: The input string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end) {
		return (1);
	}
	if (s[start] != s[end]) {
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

