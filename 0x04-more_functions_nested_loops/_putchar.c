#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes the character x to stdout
 * @x: the character to print
 * 
 * Return: on success 1.
 * On error , -1 
 *
 * */

int _putchar(char x)
{
return (write(1, &x, 1));
}
