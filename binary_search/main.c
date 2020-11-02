#include <stdio.h>
#define MAX_LENGTH 8

/** Searches the given array recursively using binary search */
int binary_search(int array[], int left, int right, int n);

int main(void)
{
    int arr[MAX_LENGTH] = {0, 2, 4, 6, 8, 10, 12, 14};
    int x = 6;
    int res = binary_search(arr, 0, MAX_LENGTH - 1, x);

    if (res == -1)
    {
        printf("Element %d does not exist in the given array\n", x);
        return 0;
    }

    printf("Found element %d at index: %d\n", x, res);
    return 0;
}

int binary_search(int array[], int left, int right, int x)
{
    if (left <= right)
    {
        // [src] https://www.geeksforgeeks.org/problem-binary-search-implementations/
        int mid = left + (right - left) / 2;

        if (array[mid] == x)
        {
            return mid;
        }
        else if (array[mid] > x)
        {
            return binary_search(array, left, mid - 1, x);
        }
        else
        {
            return binary_search(array, mid + 1, right, x);
        }
    }
    else
    {
        return -1;
    }
}