#include "holberton.h"
#include <stdlib.h>

/**
 * _strpbrk - locates the first occurence of a test string in a target string
 * @s: test string
 * @accept: target string
 *
 * Return: char pointer to byte(s) mactching in accept
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

i = 0;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s + i);
}
i++;
}
return (NULL);
}
