  
#include "holberton.h"

/**
 *_strcat - check the code for Holberton School students.
 *@dest: gazou
 *@src: goal
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int y = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[y] != '\0')
{
dest[i] = src[y];
i++;
y++;
}
return (dest);
}
