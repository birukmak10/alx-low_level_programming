#include "main.h"

/**
 * puts_half -  function that prints half of a string
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
int i, j;
j = 0;
while (str[j] != '\0')
{
j++;
}
if (j % 2 ==1)
{
i = (j - 1) / 2;
i += 1;
}
_putchar('\n');
}
