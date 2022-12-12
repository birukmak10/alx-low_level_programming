#include <stdio.h>

/**
* main - program that prints all possible combinations of single-digit numbers
*
* return - 0
*/
int main(void)
{
  int fx;
  for (fx = ; fx < 100; fx++) {
    putchar(fx + '0')
    if (fx < 99)
    {
         putchar(',');
         putchar(' ');
    }
    
  }
    putchar('\n');
    return (0);
}
