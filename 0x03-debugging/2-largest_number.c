#include <stdio.h>
#include "main.h"

/**
* largest_number - prints the largest of 3 integers
*@a: first integer
*@b: second integer
*@c: third integer
*@largest : input
* Return: Largest number
*/

int largest_number(int a, int b, int c)
{
int largest;
if (a > b)
{
if (b > c)
{
largest = a;
}
if (a > c)
{
largest = a;
}
else
{
largest = c;
}
}
else
{
if (b < c)
{
largest = c;
}
else
{
largest = b;
}
}
return (largest);}