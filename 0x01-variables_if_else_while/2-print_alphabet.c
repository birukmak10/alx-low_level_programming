#include <stdio.h>

/**
* main -  a program that prints the alphabet in lowercase
* return - 0
*/
int main(void)
{
  char al;
  
  for (al = 'a'; al  <= 'z'; al++);
  {
    putchar(al);
  }
  putchar('\n');
  return (0);
}
