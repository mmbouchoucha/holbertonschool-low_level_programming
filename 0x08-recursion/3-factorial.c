#include "holberton.h"

/**
 * _strlen_recursion - find and return the length of a string
 * @s: pointer to string
 *
 * Return: int length of string
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
