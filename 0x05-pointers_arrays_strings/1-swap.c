#include "holberton.h"

/**
 * swap_int - swap value of two integers
 * @a: pointer to location of first integer
 * @b: pointer to location of second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c = *a;
int d = *b;

*a = d;
*b = c;
}
