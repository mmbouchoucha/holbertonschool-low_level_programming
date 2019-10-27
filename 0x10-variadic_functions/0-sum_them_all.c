#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the arguments
 * @n: constant int type
 *
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
  va_list numbers;
  unsigned int i, sum;

  if (n == 0)
    return (0);
  sum = i = 0;
  va_start(numbers, n);
  while (i < n)
    {
      sum += va_arg(numbers, int);
      i++;
    }
  va_end(numbers);
  return (sum);
}
