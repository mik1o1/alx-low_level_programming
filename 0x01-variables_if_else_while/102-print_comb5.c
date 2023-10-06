#include <stdio.h>

/**
 * main - Entry point
 * ASCII CODE can also be used
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b, c, d;
int comma = ',';
int space = ' ';

for (a = '0'; a <= '9'; a++)
{
	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
		for (d = '0'; d <= '9'; d++)
		{
			if (a < c || (a == c && b < d))
			{
			putchar(a);
			putchar(b);
			putchar(space);
			putchar(c);
			putchar(d);

			if ((a + b + c + d) < ('9' + '8' + '9' + '9'))
			{
			putchar(comma);
			putchar(space);
			}
			else
			{
			}

			}
			else
			{
			}
		}
		}
	}
}
putchar('\n');
return (0);
}

