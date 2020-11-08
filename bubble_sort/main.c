#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 6

/** Sorts the given array using the bubble sort algorithm */
void bubble_sort(int array[], const size_t size);

int main(void)
{
    int arr[MAX_LENGTH] = {6, 2, 8, 1, 5, 4};

    bubble_sort(arr, MAX_LENGTH);

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

void bubble_sort(int array[], const size_t size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = tmp;
            }
        }
    }
}