#include <stdio.h>
#include <unistd.h>
/**
 * main - prints text to standard error
 * Description: diplays text to standard error
 * Return: always return 1
*/
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDERR_FILENO, message, 80);
return (1);
}
