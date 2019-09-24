#include <stdio.h>
#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: number in question
 *
 * Return: 1 if n is positive
 * Returns 0 if n is zero
 * Returns -1 if n is negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
