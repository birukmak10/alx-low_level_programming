#include "main.h"

/**
 * _puts - function that prints a string,in reverse,followed by a new line
 * @x: input string
 */

void _puts(char *x)
{
int i;
for (i = 0; x[i] != '\0'; i++)
{
_putchar(x[i]);
}
_putchar('\n');
}
