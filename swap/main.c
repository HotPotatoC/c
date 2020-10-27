#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "swap.h"

int main(void)
{
    int *x = malloc(sizeof(int));
    if (x == NULL)
    {
        return 1;
    }

    int *y = malloc(sizeof(int));
    if (y == NULL)
    {
        return 1;
    }

    *x = 10;
    *y = 20;

    printf("BEFORE SWAP: X value is %d, Y value is %d\n", *x, *y);
    swap((void *)&x, (void *)&y);
    printf("AFTER SWAP: X value is %d, Y value is %d\n", *x, *y);

    char *str_one = malloc(sizeof(char) + 5);
    if (str_one == NULL)
    {
        return 1;
    }

    char *str_two = malloc(sizeof(char) + 5);
    if (str_two == NULL)
    {
        return 1;
    }

    strcpy(str_one, "Hello");
    strcpy(str_two, "World");

    printf("BEFORE SWAP: str_one value is '%s', str_two value is '%s'\n", str_one, str_two);
    swap((void *)&str_one, (void *)&str_two);
    printf("AFTER SWAP: str_one value is '%s', str_two value is '%s'\n", str_one, str_two);

    free(x);
    free(y);

    free(str_one);
    free(str_two);
    return 0;
}