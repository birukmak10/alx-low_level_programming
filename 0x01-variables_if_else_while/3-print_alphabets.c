#include <stdio.h>

/**
* main: program that prints the alphabet in lowercase, and then in uppercase
* return: 0
*/
int main(void)
{
char dx;
for (dx = 'a'; dx <= 'z'; dx++)
  putchar(dx);

for (dx = 'A'; dx <= 'Z'; dx++)
  putchar(dx);
putchar('\n');
return (0);
}
