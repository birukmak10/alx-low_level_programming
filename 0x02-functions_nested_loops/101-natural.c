#include <stdio.h>

/**
 * main -  a Nature made the natural numbers; All else is the work of women
 *
 * Return: Always 0.
 */
int main(void)
{
  int a, b = 0;
  while(a <1024)
  {
    if((a%3 ==0)|| (a%5 == 0))
    {
      b += a;
    }
    a++;
  }
  printf("%d\n", b);
  return (0);
}
