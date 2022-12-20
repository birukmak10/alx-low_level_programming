#include "main.h"

/**
 * _puts - function that prints a string,followed by a new line,to stdout
 * @str: input
 * Return:string
 */

int _puts(char *str)
{
int i;
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
