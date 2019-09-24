#include <stdio.h>

/**
 * main - print first 50 numbers in fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
  long i, n, sum, count;

  i = 0;
  n = 1;
  for (count = 0; count < 50; count++)
    {
      sum = i + n;
      i = n;
      n = sum;
      if (count != 49)
	printf("%ld, ", sum);
      else
	printf("%ld\n", sum);
    }
  return (0);
}
