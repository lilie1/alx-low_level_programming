#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: determine either greator than 5, is less than 6 or is 0
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		prinf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l < 6 && m != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n" n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
