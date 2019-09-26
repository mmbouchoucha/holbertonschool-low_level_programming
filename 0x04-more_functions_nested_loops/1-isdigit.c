#include "holberton.h"

/**
 * _isdigit - determine whether c is a digit
 * 
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
int i;

i = 0;
if (c >= '0' && c <= '9')
i = 1;
return (i);
}
