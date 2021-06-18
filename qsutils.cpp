#include "quicksort.h"

#define BIGINNER 100
#define DIGITS 899

void InitArray(int *arr, int length)
{
    for (int i = 0; i < length; i++)
        *(arr + i) = rand() % DIGITS + BIGINNER;
}

void ShowArray(int *arr, int length)
{
    std::cout << '[' << *arr;
    for (int i = 1; i < length; i++)
        std::cout << ", " << *(arr + i);
    std::cout << ']' << std::endl;
}

void Swap(int *first, int *second)
{
    int value = *first;
    *first = *second;
    *second = value;
}

void CheckArray(int *arr, int length, bool ascend)
{
    if (ascend == true)
    {
        for (int i = 0; i < length - 1; i++)
            if (*(arr + i) > *(arr + i + 1))
            {
                std::cerr << "UnsortedArrayError" << std::endl;
                exit(0);
            }
    }
    else
    {
        for (int i = 0; i < length - 1; i++)
            if (*(arr + i) < *(arr + i + 1))
            {
                std::cerr << "UnsortedArrayError" << std::endl;
                exit(0);
            }
    }
    std::cout << "-- Sorted --" << std::endl;
}
