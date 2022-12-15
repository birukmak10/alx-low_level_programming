#include "main.h"

/**
* _isupper - checks if parameter is an uppercase character.
* @x: input character.
* Return: 1 if an uppercase character , 0 if lowercase
**/

int _isupper(int x)
{
if (x >= 65 && x <= 90)
{
return (1);
}
else
{
return (0);
}
}
