#include "main.h"

/**
 * rev_string - function that reverses a string
 * @x: input string
 * Return: void
 */
void rev_string(char *x)
{
int len = 0, i = 0;
char j;
while (x[i++])
len++;
for (i = len - 1; i >= len / 2; i--)
{
j = x[i];
x[i] = x[len - i -1];
x[len - i - 1] = j;
}
}
