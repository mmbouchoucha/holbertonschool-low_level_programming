#include <stdio.h>
#include "holberton.h"

/**
 *_isalpha - checks if character is in alphabet
 * @c: char to check if alpha
 *Return: 1 if c is a letter; 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
