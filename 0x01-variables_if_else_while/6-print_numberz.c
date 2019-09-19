#include <stdio.h>

/**
 * main - print 0-9 with type int
 * Return: 0 to exit
 */

int main(void)
{
int i;
i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
