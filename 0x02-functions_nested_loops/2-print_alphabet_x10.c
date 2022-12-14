 #include "main.h"

/**
 *  function that prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)
{
  int x;
  char l;
  for (x = 0; x <= 9;x++)
  {
    for (l = 'a'; l <= 'z';l++)
      _putchar(l);
    _putchar('\n');
  }
}
