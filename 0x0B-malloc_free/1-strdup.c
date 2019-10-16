#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copy a str
 * @str: str
 *
 * Return: p to copy
 */
char *_strdup(char *str)
{
char *s;
unsigned int i, n;

if (str == NULL)
return (NULL);
i = 0;
while (str[i])
i++;
s = malloc((i * sizeof(char)) + 1);
if (s == NULL)
return (NULL);
n = 0;
while (n < i)
{
s[n] = str[n];
n++;
}
s[n] = '\0';
return (s);
}
