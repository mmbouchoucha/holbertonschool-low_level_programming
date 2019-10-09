#include "holberton.h"

/**
 * _pow_recursion - calculate the value of a number raised to another number
 * @x: base value
 * @y: power value
 *
 * Return: int value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
y--;
return (x * _pow_recursion(x, y));
}
