#include "main.h"

/**
 * _puts - function that prints a string,in reverse,followed by a new line
 * @x: input string
 */

void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
