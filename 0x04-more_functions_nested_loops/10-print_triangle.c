#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @x : nubers of lines
 * @i:input
 * @j:input
 * @k:input
 * Return: no return
 */
void print_triangle(int x)
{
int i, j, k;
if (x <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < (x - 1); j++)
{
for (i = 0; i < (x - 1) - j; i++)
{
_putchar(' ');
}
for (k = 0; k <= j; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
