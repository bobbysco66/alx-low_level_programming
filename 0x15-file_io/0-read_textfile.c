#include "main.h"
/**
 * read_textfile - this function reads a text file and prints it to the POSIX
 * @filename: name
 * @letters: count of letters
 *
 * Return: the number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int x, r, w;
char *buffer = malloc(sizeof(char) * letters);
if (filename == NULL)
{
return (0);
}
/*OPEN*/
x = open(filename, O_RDONLY);
if (x == -1)
{
return (0);
}
/*READ*/
r = read(x, buffer, letters);
if (r == -1)
{
return (0);
}
/*WRITE*/
w = write(STDOUT_FILENO, buffer, r);
if (w == -1)
{
return (0);
}
close(x);
return (w);
}
