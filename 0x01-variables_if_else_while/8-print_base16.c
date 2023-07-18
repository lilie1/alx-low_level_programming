#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
