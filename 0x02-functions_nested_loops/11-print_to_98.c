#include <stdio.h>
#include "main.h"

/**
 * main -  a function that prints all natural numbers from n to 98, followed by a new line
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
  if(n>98)
  {
     while(n>98)
     {
       printf("%d, ", n--);
     }
     printf("%d\n", n);
  }
  else
  {
    while(n<98)
    {
      printf("%d, ", n++);
    }
    printf("%d\n", n);
  }

}
