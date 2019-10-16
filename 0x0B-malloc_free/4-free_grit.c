  
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free alloc_grid.c
 * @grid: p to p
 * @height: height
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
  int i;

  i = height - 1;
  while (i >= 0)
    {
      free(grid[i]);
      i--;
    }
  free(grid);
}
