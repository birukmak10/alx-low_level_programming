#include <stdio.h>

/**
* main: program that prints the alphabet in lowercase 
* return: 0
*/
int main(void)
{
  char fx;
  for (fx = 'a'; fx <= 'z'; fx++)
  {
       if (fx != 'e' && fx != 'q')
         putchar(fx);
  }
  putchar('\n');
  
  return (0);
  
}
