#include <stdio.h>

/**
* main - program that prints all possible combinations of single-digit numbers
*
* return - 0
*/
int main(void)
{
  int fx;
  for (fx = 0 ; fx < 10; fx++) {
    putchar(fx + '0')
    if (fx < 9)
    {
         putchar(',');
         putchar(' ');
    }
    
  }
    putchar('\n');
    return (0);
}
