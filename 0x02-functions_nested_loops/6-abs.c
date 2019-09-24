#include <stdio.h>
#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @i: interger to computer
 *
 * Return: absolute value;
 */

int _abs(int i)
{
if (i < 0)
{
i = i * -1;
return (i);
}
else
{
return (i);
}
}
