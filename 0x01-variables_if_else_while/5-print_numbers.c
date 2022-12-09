#include <stdio.h>

/**
* main - program that prints all single digit numbers of base 10 starting from 0
* return - 0
*/
int main(void)
{
  int gr;
  for (gr = 0; gr < 10; gr++)
    print("%d",gr);
  print("\n");
  return(0);
}
