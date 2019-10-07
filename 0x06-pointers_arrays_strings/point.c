#include "holberton.h"

/**
 * print_triangle - print triangle with # characters
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
  int i;
  int n;
  int t;

  if (size <= 0)
    _putchar('\n');
  else
    {
      for (i = 1; i <= size; i++)
{
for (n = (size - i); n > 0; n--)
{
_putchar(' ');
}
for (t = 0; t < i; t++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
