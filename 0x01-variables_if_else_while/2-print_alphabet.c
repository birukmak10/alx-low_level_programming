#include <stdio.h>

/**
* main -  a program that prints the alphabet in lowercase
* return - 0
*/
int main(void)
{
  char alp;
  
  for (alp = 'a'; alp  <='z'; alp++);
  {
    putchar(alp);
  }
  putchar('\n');
  return (0);
}
