#include "quicksort.h"

void QuickSort(int *left, int *right)
{
    int length = right - left + 1;
    int *llast, *rfirst;
    if (length > 1)
    {
        Partition(left, right, &llast, &rfirst);
        QuickSort(left, llast);
        QuickSort(rfirst, right);
    }
}