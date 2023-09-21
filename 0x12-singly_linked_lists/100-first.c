#include <stdio.h>

void my_constructor(void) __attribute__((constructor));

/**
 * my_constructor - Function that runs before main.
 */
void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}

