#include "main.h"
/**
 * print_alphabet_x10 - func
 * Return - 0
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
