#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: 0;
 */

int main(void)
{
  long i, n, sum, count;

  i = 0;
  n = 1;
  for (count = 0; count < 99; count++)
    {
      sum = i + n;
      i = n;
      n = sum;
      if (count != 98)
	printf("%ld, ", sum);
      else
	printf("%ld\n", sum);
    }
  return (0);
}
