#include"main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: to be free grid
 * @height: matrix height
 * Return: null
 */
void free_grid(int **grid, int height)
{
for (int i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
