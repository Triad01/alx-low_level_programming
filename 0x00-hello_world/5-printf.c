#include <stdio.h>

/**
* main - entry into our program
* Description: prints text to display
* Return: always return 0
*/
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of long: %zu bytes\n", sizeof(long));
printf("Size of long long: %zu bytes\n", sizeof(long long));
return (0);
}
