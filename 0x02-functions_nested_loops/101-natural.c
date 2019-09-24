#include <stdio.h>
#include "holberton.h"

/**
 * main - compute and print sum of all the multiples of 3 or 5
 * below 1024
 *
 * Return: 0
 */

int main(void)
{
  int n;
  int sum;

  sum = 0;
  for (n = 0; n < 1025; n++)
    {
      if ((n % 3 == 0) || (n % 5 == 0))
	{
	  sum = sum + n;
	}
    }
  printf("%d\n", sum);
  return (0);
}
