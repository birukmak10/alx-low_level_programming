 #include <stdlib.h>
 #include <stdio.h>
 /**
 * main - Prints the number from 1 - 100
 * Return: Always 0
 */
int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if(i=100)
        {
            printf("%s", "Buzz")
        }
        else if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("%s", "FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("%s", "Fizz");
        }
        else if (i % 5 ==0)
        {
            printf("%s", "Buzz");
        }
        else
        {
            printf(" %d", i);
        }
    }
    printf('\n');
    return (0);
}
 