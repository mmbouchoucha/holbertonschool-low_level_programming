#include <stdio.h>

/**
 * main - print the factor of num 612852475143
 *
 * Return: 0 if success
 */
int main(void)
{
long n = 612852475143, i = 2;

while (i * i < n)
{
while (n % i == 0)
n = n / i;
i = i + 1;
}
printf("%ld\n", n);
return (0);
}
