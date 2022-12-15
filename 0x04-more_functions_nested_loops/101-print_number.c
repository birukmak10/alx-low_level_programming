#include "main.h"

/**
 * print_number - prints an integer.
 * @x: input integer
 * Return: no return
 */
void print_number(int x)
{
    unsigned int m, d, count;
    if (x <0)
    {
        _putchar(45);
        m = x * -1;
    }
    else
    {
        m = x;
    }
    d = m;
    count = 1;
    while (d > 9)
    {
        d /= 10;
        count *= 10;
    }
    for (; count >= 1;count /= 10)
    {
        _putchar(((m / count) % 10) + 48);
    }
}