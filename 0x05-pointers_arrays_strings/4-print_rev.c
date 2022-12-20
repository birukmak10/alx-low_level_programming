#include "main.h"

/**
 * print_rev - prints a string,in reverse,followed by a new line
 * @x: input string
 */
void print_rev(char *x)
{
int i;
for (i = 0; x[i] != '\0'; i++)
;
for (i = i -1; x[i] != '\0'; i--)
{
_putchar(x[i]);
}
_putchar('\n');
}
