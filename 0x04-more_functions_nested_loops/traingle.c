#include <stdio.h>
/**
 *print_triangle
 * Return: nothing
 */
int main(void)
{
  int size;
  int h;
  int row;
  int space;
  size = 10;
  if (size > 0)
    {
      for (h = 0; h < size; h++)
	{
	  for (row = 0; row < (h + 1); row++)
	    {
	      for (space = 1; space < size - row; space++)
		{
		  putchar(' ');
		}
	      putchar('#');
	    }
	  if (h == (size - 1))
	    {
	      continue;
	    }
	  putchar('\n');
	}
    }
  putchar('\n');
}
