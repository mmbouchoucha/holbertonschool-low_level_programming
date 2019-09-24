#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer - print minutes in the day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
int h, m;
int f, s, t, l;

for (h = 0; h < 24; h++)
{
m = 0;
while (m < 60)
{
f = h / 10;
s = h % 10;
t = m / 10;
l = m % 10;
_putchar(f + '0');
_putchar(s + '0');
_putchar(':');
_putchar(t + '0');
_putchar(l + '0');
_putchar('\n');
m++;
}
}
}
