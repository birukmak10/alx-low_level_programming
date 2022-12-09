#include <stdio.h>

/**
* main - program that prints all single digit numbers of base 10 starting from 0, followed by a new line 
* return - 0
*/
int main(void)
{
  int fx;
  for (fx=0; fx < 10; fx++)
     putchar((fx % 10) + '0');
  
  putchar('\n');
  
  return(0);
}
