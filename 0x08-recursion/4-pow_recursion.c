#include "holberton.h"

/**
 * _strlen_recursion - find and return the length of a string
 * @s: pointer to string
 *
 * Return: int length of string
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y <= 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
