  #include "main.h"

/**
 * print_line - function that draws a straight line in the termina
 * @x: straight line is printed
 * Return: no return
*/
void print_line(int x)
{
int i;
for (i = 0; i < x; i++)
{
_putchar(95);
}
_putchar('\n');
}