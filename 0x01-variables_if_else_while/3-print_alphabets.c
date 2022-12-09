#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
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
