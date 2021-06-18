#include "quicksort.h"

// int *leftfirst, int *rightlast, int **leftlast, int **rightfirst
void Partition(int *lfirst, int *rlast, int **llast, int **rfirst)
{
    int *left = lfirst;
    int *right = rlast;
    int index = rand() % (rlast - lfirst + 1);
    int *pivot = lfirst + index;
    while (left < right)
    {
        while (left < rlast && *left <= *pivot)
            left++;
        while (right > lfirst && *right >= *pivot)
            right--;
        if (left < right)
            Swap(left++, right--);
        else if (left < pivot)
            Swap(left++, pivot);
        else if (right > pivot)
            Swap(right--, pivot);
    }
    *llast = right;
    *rfirst = left;
}
