#include "swap.h"

void swap(void **first, void **second)
{
    auto void *tmp = *first;
    *first = *second;
    *second = tmp;
}