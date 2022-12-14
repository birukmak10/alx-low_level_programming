#include "main.h"

/**
 * main - Prints the last digit
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
  int l = n % 10;
  if(l<0)
  {
    l *= -1;
  }
  _putchar(l + '0');
  return (0);
}
