#include <stdio.h>
/**
 * main - Entry point
 * ASCII CODE can also be used
 * Base 16 (lower case):
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
 * a, b, c, d, e, AND f
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, a;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
