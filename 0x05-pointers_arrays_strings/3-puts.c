#include "main.h"

/**
 * _puts - function that prints a string,in reverse,followed by a new line
 * @x: input string
 */

void _puts(char *str)
{
int i;
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
