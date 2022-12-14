#include "main.h"

/**
 * main - a function that checks for alphabetic characte
 *
 * Return: Always 0.
 */
int _isalpha(int r)
{
  if((r>='a' && r <='z')|| (r>='A' && r <='Z'))
  {
    return (1);
  }
  else
  {
    return (0);
  }  
} 
