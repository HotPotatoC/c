#include <stdio.h>

int fibonacci(const int i);

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", fibonacci(i));
    }

    return 0;
}

int fibonacci(const int i)
{
    if (i == 0)
        return 0;

    if (i == 1)
        return 1;

    return fibonacci(i - 1) + fibonacci(i - 2);
}