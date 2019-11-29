#include "holberton.h"
/**
 * get_endianness - check
 * Return: 0 in big endian, 1 in little endian.
 */
int get_endianness(void)
{
int a = 16777216;
int *p = &a;

if (!(*p >> 24) & 1)
return (0); /* big endian */
return (1); /* little endian */
}
