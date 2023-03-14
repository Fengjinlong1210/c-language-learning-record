#include "Sort.h"

void TestMergeSort()
{
    int n = 10;
    int *arr = (int *)malloc(sizeof(int) * n);
    if (!arr)
    {
        perror("malloc");
        exit(-1);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    MergeSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void TestQuickSort()
{
    int n = 10;
    int *arr = (int *)malloc(sizeof(int) * n);
    if (!arr)
    {
        perror("malloc");
        exit(-1);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    TestQuickSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    srand((unsigned int)time(NULL));
    // TestMergeSort();
    int n = 10;
    int *arr = (int *)malloc(sizeof(int) * n);
    if (!arr)
    {
        perror("malloc");
        exit(-1);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    QuickSortNonR(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}