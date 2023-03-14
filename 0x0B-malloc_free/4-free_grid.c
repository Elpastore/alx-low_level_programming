#include "main.h"
#include <stdlib.h>
/**
 * free_grid -frees  grid previously 2 dim array created
 * @grid: int 2 dim array
 * @height: number of row
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
