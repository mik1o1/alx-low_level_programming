#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	char mirror;

	for (mirror = 'z' ; mirror >= 'a' ; mirror--)
	{
	putchar (mirror);
	}
	putchar('\n');
	return (0);
}
