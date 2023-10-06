#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;
	/*ASCII CODE: a =  97, z = 122 */
	for (y = 97; y <= 122; y++)
	{
		/*ASCII CODE: q =  101, e = 113 */
		if (y == 101 || y == 113)
		{
		}
		else
		{
		putchar(y);
		}
	}
	putchar('\n');
	return (0);
}
