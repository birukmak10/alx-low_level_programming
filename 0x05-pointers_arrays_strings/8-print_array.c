#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @x: input integer
 * @n: input number
 * Return: void
 */
void print_array(int *x ,int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", x[i]);
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
