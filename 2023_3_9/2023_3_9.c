#include "Sort.h"

int main()
{
    int arr[] = {6,2,9,7,5,4,8,3,1,0};
    int sz = sizeof(arr)/sizeof(int);
    QuickSort3(arr, 0, sz);
    int i = 0;
    for(i = 0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}