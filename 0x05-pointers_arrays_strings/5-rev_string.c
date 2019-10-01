#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
int i, t;
char letter;

for (i = 0; s[i] != 0; i++)
{
}

t = 0;
i = i - 1;
while (t < i)
{
letter = s[i];
s[i] = s[t];
s[t] = letter;
t++;
i--;
}
}
