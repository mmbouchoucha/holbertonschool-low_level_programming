#include <stdio.h>

/**
 * main - print 0 to 99 with commas
 * Return: 0 to exit
 */

int main(void)
{
int i = 0;
int n = 0;

while (i < 10)
{
n = 0;
while (n < 10)
{
putchar(i + '0');
putchar(n + '0');
if (i + n != 18)
{
putchar(',');
putchar(' ');
}
n++;
}
i++;
}
putchar('\n');
return (0);
}
