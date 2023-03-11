#include "Sort.h"

void Test()
{
    int arr[] = {6, 5, 3, 7, 8, 9, 1, 2, 4, 0};
    int sz = sizeof(arr) / sizeof(int);
    MergeSort(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    Test();
    return 0;
}