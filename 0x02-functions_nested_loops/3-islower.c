#include "main.h"

/**
 * main - function that checks for lowercase characte
 *
 * Return: Always 0.
 */
int _islower(int r)
{
  if(r>='a' && r <='z')
  {
    return (1);
  }
  else
  {
    return (0);
  }  
}
