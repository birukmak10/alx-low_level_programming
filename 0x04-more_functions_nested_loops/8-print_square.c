/**
 * main -function that prints a square, followed by a new line
 * Return: Always 0
 */
int main(void)
{
    int i;
    i = 1;
    printf("%d", i);
    for (i = 2; i <= 100; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf(" FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf(" Fizz");
        }
        else if (i % 5 ==0)
        {
            printf(" Buzz");
        }
        else
        {
            printf(" %d", i);
        }
    }
    printf('\n');
    return (0);
}
 