#include <stdio.h>

/**
* main - Entry 
* return - 0
*/
int main(void)
{
  int fx;
  int cg;
  
  for (fx = 0; fx < 10; fx++)
    putchar((fx % 10) + '0');
  
  for (cg = 'a'; cg <= 'f'; cg++)
    putchar(cg);
  
  putchar('\n');
  
  return(0);
}
  
