#include "holberton.h"

/**
 * print_square - check the code
 * @n : int
 * Return: 0 if success
 */
void print_square(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
