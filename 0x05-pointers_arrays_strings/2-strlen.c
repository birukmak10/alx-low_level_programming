#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @a: input
 * Return; Length of the string
 */

int _strlen(char *a)
{
int i;
for (i = 0; a[i] != '\0'; i++)
;
return (i);
}