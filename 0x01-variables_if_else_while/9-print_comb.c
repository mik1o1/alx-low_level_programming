#include <stdio.h>
/**
 * main - Entry point
 * ASCII CODE can also be used
 * a - 97	A - 65
 * z - 122	Z - 90
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
