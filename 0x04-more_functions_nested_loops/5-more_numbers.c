#include "holberton.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
int i;
int n;

n = 0;
while (n < 10)
{

for (i = 0; i < 15; i++)
{
if (i >= 10)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
n++;
_putchar('\n');
}
}
