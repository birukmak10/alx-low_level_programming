#include <stdio.h>

/**
* main - program that prints all possible combinations of single-digit numbers. 
* return - 0
*/
int main(void)
{
  int fx;
  for (fx = 48; fx < 58; fx++)
  {
    putchar(fx);
    if (fx != 57)
    {
         putchar(',');
         putchar(' ');
    }
    putchar('\n');
    return (0);
    
}
