#include <stdio.h>

/**
 * main - Entry point
 * ASCII CODE can also be used
 * Return: Always 0 (Success)
 */

int main(void)
{
int d, a;
int comma = ',';
int space = ' ';

	for (a = '0'; a <= '8'; a++)
	{
		for (d = '1'; d <= '9'; d++)
		{
			if (d <= a)
			{
			}
			else
			{
			putchar(a);
			putchar(d);
				if (a + d < '8' + '9')
				{
				putchar(comma);
				putchar(space);
				}
				else
				{
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

