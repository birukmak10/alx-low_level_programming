#include "main.h"

/**
 * _puts - function that prints a string,in reverse,followed by a new line
 * @x: input string
 */

void _puts(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
