 #include "main.h"

/**
 * main -  a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: Always 0.
 */
void time_table(void)
{
  int num, mul, prd;
  for (num = 0; num <= 9;num++)
  {
    _putchar('0');

    for (mul = 1; mul <= 9; mul++)
    {
      _putchar(',');
      _putchar(' ');

      prd = num + mul;

      if (prd<=9)
      {
        _putchar(' ');
      }
      else
      {
        _putchar((prd / 10) + '0');
      }
      _putchar((prd % 10) + '0');
    }
    _putchar('\n');
  }
}
