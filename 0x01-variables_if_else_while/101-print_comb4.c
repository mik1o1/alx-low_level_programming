#include <stdio.h>

/**
 * main - Entry point
 * ASCII CODE can also be used
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b, c;
int comma = ',';
int space = ' ';

	for (a = '0'; a <= '7'; a++)
	{
		for (b = '1'; b <= '8'; b++)
		{
			for (c = '1'; c <= '9'; c++)
			{
				if (c > b && b > a)
				{
				putchar(a);
				putchar(b);
				putchar(c);
					if (a + b + c < '7' + '8' + '9')
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
	putchar('\n');
	return (0);
}

