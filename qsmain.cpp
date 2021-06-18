#include "quicksort.h"
#include <time.h>

#define LENGTH 15
#define ASCEND true
#define DESCEND false

int main()
{
    int arr[LENGTH];
    srand(time(NULL));
    InitArray(arr, LENGTH);
    ShowArray(arr, LENGTH);
    QuickSort(arr, arr + LENGTH - 1);
    ShowArray(arr, LENGTH);
    CheckArray(arr, LENGTH, ASCEND);
    return 0;
}