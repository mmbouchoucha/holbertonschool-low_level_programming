#include "holberton.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: the number
 *
 * Return: int factorial value
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
