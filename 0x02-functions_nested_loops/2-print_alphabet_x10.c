#include "holberton.h"

/**
 * print_alphabet_x10 - prints thru z
 * Return: void
 */

void print_alphabet_x10(void)
{
char x;
int i;

for (i = 0; i < 10; i++)
{
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
}
