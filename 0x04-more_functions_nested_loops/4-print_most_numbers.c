#include "main.h"

/**
 * print_most_numbers -print numbers between 0-9
 * Return: no return
*/

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if ((i == 2) || (i == 4))
continue;
else
_putchar(i + '0');
}
_putchar('\n');
}
