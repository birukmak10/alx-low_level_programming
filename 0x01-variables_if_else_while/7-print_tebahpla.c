#include <stdio.h>

/**
* main - program that prints the lowercase alphabet in reverse, followed by a new line.
* return - 0
*/
int main(void)
{
 char fx;
  for (fx = 'z'; fx >= 'a'; fx--)
       putchar(fx);
   putchar('\n');
   
   return (0);
}
