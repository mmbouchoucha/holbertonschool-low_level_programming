#include <stdio.h>

/**
 * main - print sum of even fibonacci numbers to 4000000
 *
 * Return: 0
 */

int main(void)
{
  long i, n, even_sum, total_sum, max;

  i = 1;
  n = 2;
  max = 4000000;
  even_sum = 0;
  total_sum = 0;
  while (i < max && n < max)
    {
      if ((n % 2) == 0)
	even_sum += n;
      total_sum = i + n;
      i = n;
      n = total_sum;
    }
  printf("%ld\n", even_sum);
  return (0);
}
