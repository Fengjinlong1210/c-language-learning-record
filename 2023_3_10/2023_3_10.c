#include "Sort.h"

void TestMergeSort()
{
    int arr[] = {10,6,7,1,3,9,4,2};
    int sz = sizeof(arr)/sizeof(int);
    MergeSort(arr, sz);
    int i=0;
    for(i = 0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main()
{
    TestMergeSort();
    return 0;
}