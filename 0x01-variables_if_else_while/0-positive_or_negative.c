#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of code
 * Description: Checks if random number n, is positive or negative
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		if (n > 0)
		{
			printf("is positive");
		}
		else
		{
			printf("is negative");
		}
	}
	return (0);
}
