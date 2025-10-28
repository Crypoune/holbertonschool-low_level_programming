#include "main.h"

/**
* print_triangle - prints a triangle using the # character
* @size: size of the triangle
*
* Description: prints a right-aligned triangle of '#' characters,
* followed by a new line. If size is 0 or less, prints only a new line.
*/
void print_triangle(int size)
{
int row, col, space;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
_putchar(' ');
for (col = 0; col < row; col++)
_putchar('#');
_putchar('\n');
}
}
