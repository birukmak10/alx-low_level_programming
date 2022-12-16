#include "main.h"
/**
 * print_square -function that prints a square, followed by a new line
 * @x:input integer
 * Return: Always 0
 */
void print_square(int x)
{
int a, b;
if (x <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= x; a++)
{
_putchar('#');
for (b = 2; b <= x; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
