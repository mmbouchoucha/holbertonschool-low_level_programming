#include <stdio.h>
#include "holberton.h"

/**
 * times_table - print multiplication table for 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
int x;
int y;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
if (y == 0)
{
_putchar(y * x + '0');
}

else if ((y * x) < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(x * y + '0');
}
else
{
_putchar(' ');
_putchar((x * y) / 10 + '0');
_putchar((x * y) % 10 + '0');
}
if (y != 9)
_putchar(',');
}
_putchar('\n');
}
}
