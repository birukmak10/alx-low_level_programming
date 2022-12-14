#include "main.h"

/**
 * main -  a function that prints the last digit of a number
 *
 * Return: Always 0.
 */
int print_last_digit(int c)
{
  int x = c % 10;
  
  if (x<0)
    x *= -1;

  _putchar(x + '0');

  return (0);
}
