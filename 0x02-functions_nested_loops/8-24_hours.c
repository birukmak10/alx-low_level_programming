#include "main.h"

/**
 * main -  a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
  int x, y, z, w;
  for (x = 0; x <= 2; x++)
  {
    for (y = 0; y <= 9;y++)
    {
      if((x<=1 && y<=9)|| (x<=2 && y <=3))
      {
        for (z = 0; z <= 5;z++)
        {
          for (w = 0; w <= 0;w++)
          {
            _putchar(x+'0');
            _putchar(y+'0');
            _putchar(58);
            _putchar(z +'0');
            _putchar(w +'0');
            _putchar('\n');
          }
        }
      }
    }
  }
}
