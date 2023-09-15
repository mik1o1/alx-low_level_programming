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
	int s, b;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
