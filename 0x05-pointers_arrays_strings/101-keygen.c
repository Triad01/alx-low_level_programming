#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, sum, target;
	char password[100];

	srand(time(0));

	target = 2772;

	for (i = 0, sum = 0; sum < target - 122; i++)
	{
		password[i] = rand() % 90 + 32;
		sum += password[i];
	}

	password[i] = target - sum;

	password[i + 1] = '\0';

	printf("%s", password);

	return (0);
}

