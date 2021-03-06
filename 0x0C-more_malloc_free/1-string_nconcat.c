#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concat a num of bytes of two str
 * @s1: str one
 * @s2: str two
 * @n: num of bytes to copy
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i])
i++;
str = malloc((i + n) * sizeof(*str) + 1);
if (str == NULL)
return (NULL);
j = 0;
while (s2[j])
j++;
i = 0;
while (s1[i])
{
str[i] = s1[i];
i++;
}
j = 0;
while (s2[j] && j < n)
{
str[i] = s2[j];
i++;
j++;
}
str[i] = '\0';
return (str);
}
