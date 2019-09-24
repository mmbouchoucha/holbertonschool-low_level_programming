#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number being examined
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
int x;

if (n < 0)
{
n = n * -1;
}
x = n % 10;
_putchar(x + '0');
return (x);
}
