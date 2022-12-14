#include main.h
#include <unistd.h>

/**
 *  program that prints _putchar
 * @c: The character to print
 * 
 *  Return: on success 1
 * /

 int _putchar(char c)
 {
      return (write(1, &c, 1));
 }
