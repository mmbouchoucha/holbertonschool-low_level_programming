#include "holberton.h"

/**
 * _sqrt - checks for square root of c
 * @i: sqrt
 * @x: num to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int _sqrt(int i, int x)
{
if (i * i == x)
return (i);
if (i * i > x)
return (-1);
return (_sqrt(i + 1, x));
}

/**
 * _sqrt_recursion - return the natural square root of a num
 * @n: int to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (_sqrt(1, n));
}
