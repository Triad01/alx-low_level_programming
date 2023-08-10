#include <stdio.h>
/**
* main - shows the sizes of types
* Description: displays the sizes to output
* Return: always return 0
*/
int main(void)
{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a float: %zu bytes\n", sizeof(float));
printf("Size of a double: %zu bytes\n", sizeof(double));
printf("Size of a long: %zu bytes\n", sizeof(long));
printf("Size of a long long: %zu bytes\n", sizeof(long long));
return (0);
}
