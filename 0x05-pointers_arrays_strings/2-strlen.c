#include "holberton.h"

/**
 * _strlen - find length of string
 * @s: pointer to  string
 *
 * Return: length of s
 */

int _strlen(char *s)
{
int l;

l = 0;
while (*(s++) != '\0')
l++;
return (l);
}
