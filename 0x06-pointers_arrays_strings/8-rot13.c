#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - func
 * @a: p char
 * Return: return char
 */
char *rot13(char *a)
{
int i;
int j;
int z = 0;
char d[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char m[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
for (i = 0; d[i] != '\0'; i++)
{
for (j = 0; m[j] != '\0' && z == 0; j++)
{
if (d[i] == m[j])
{
d[i] = m[j];
z = 1;
}
}
z = 0;
}
return (a);
}
