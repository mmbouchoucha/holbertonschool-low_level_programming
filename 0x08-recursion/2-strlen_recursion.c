#include "holberton.h"

/**
 * _strlen_recursion - find and return the length of a string
 * @s: pointer to string
 *
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
int i;

i = 0;
if (*s == '\0')
return (i);
i++;
return (i + _strlen_recursion(s + i));
}
