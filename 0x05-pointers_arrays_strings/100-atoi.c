#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @x: Pointer to converter
 * Return: pointer to dest
 */

int _atoi(char *x)
{
    int i = 0;
    int j = 0;
    int min = 1;
    unsigned int n = 0;
    while (x[i])
    {
        if(x[i] == 45)
        {
            min *= -1;
        }
        while (x[i] >= 48 && x[i] <= 57)
        {
            j = 1;
            n = (n * 10) + (x[i] - '0');
            i++;
        }
        if (j == 1)
        {
            break;
        }
        i++;
    }
    n *= min;
    return (n);
}
