#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @x : nubers of lines
 * Return: no return
 */
void print_triangle(int x)
{
int i, j;
for (i = 0; i < x; i++)
{
for (j = 1; j < (x - 1); j++)
 {
_putchar(' ');
}
for (j-- ; j < x; j++)
{
_putchar(35);
}
if(i < (x - 1))
{
_putchar('\n');
}       
}
_putchar('\n');
}
