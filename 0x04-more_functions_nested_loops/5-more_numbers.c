 #include "main.h"

/**
 * more_numbers - print more numbers or integer
*/
void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; i <= 14; j++)
{
if (j >= 10)
{
_putchar('1');
}
_putchar('\n');
}
}
}