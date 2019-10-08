#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: target string
 * @needle: substring
 * Description: find the "needle" in the "haystack"
 * Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
char *str;
char *target;

while (*haystack != '\0')
{
str = haystack;
target = needle;
while (*haystack != '\0')
{
str = haystack;
target = needle;
while (*target == *haystack && *haystack != 0 && *target != 0)
{
haystack++;
target++;
}
if (*target == 0)
return (str);
haystack = str + 1;
}
}
return (NULL);
}
