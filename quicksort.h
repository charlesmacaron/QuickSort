#include <iostream>

// -- File: qsutils.cpp --

// Function: initialize an array with integers
// Argument: int *array, int length
void InitArray(int *, int);

// Function: print an array as string
// Argument: int *array, int length
void ShowArray(int *, int);

// Function: swap two elements
// Argument: int *first element, int *second element
void Swap(int *, int *);

// Function: check an array in expected order
// Argument: int *array, int length, bool ascending
void CheckArray(int *, int, bool);

// -- File: quicksort.cpp --

// Function: sort an array by quicksort
// Argument: int *first element, int *last element
void QuickSort(int *, int *);

// -- File: partition.cpp --

// Function: sort partitioned array from QuickSort()
// Argument: int *first element, int *last element,
//           int **last element of first partition,
//           int **first element of second partition
void Partition(int *, int *, int **, int **);
