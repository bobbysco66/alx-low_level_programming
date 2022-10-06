#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - concat two arrays
 * @width: size of the memory to print
 * @height: size of the memory to print
 * Return: a pointer of array or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
int **matrix;
int i;
int j;
int l;
int *p;
if (width <= 0 || height <= 0)
return (NULL);
matrix = (int **)malloc(height * sizeof(int *));
if (matrix == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
*(matrix + i) = (int *)malloc(width * sizeof(int));
if (*(matrix + i) == NULL)
{
for (i = 0; i < height; i++)
{
p = matrix[i];
free(p);
}
free(matrix);
return (NULL);
}
}
for (l = 0; l < height; l++)
{
for (j = 0; j < width; j++)
{
matrix[l][j] = 0;
}
}
return (matrix);
}

