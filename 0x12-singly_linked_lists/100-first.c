#include <stdio.h>
/**
 * my_constructor - execute before main
 */
void my_constructor(void) __attribute__((constructor));
void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
