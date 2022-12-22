#include "main.h"


/**
 * _strcat - Concatenates the string pointed to by @src, including the x
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
    int i, j;
    j = 0;
    for (i = 0; dest[i] != '\0';)
        i++;
    do{
        j++;
        dest[i] = src[j];
        i++;
    } while (src[j] != '\0');
    return (dest);
}
