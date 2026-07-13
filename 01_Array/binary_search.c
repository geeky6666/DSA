#include <stdio.h>
int binary_search(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    
    while (low<=high){
    int mid = (low + high) / 2;
    if(arr[mid]==element)
        {
        return mid;
    }
    else if (arr[mid] < element)
    {
        low = mid + 1;
    }
    else if (arr[mid] > element)
    {
        high = mid - 1;
    }
    else
    {
        printf("not found");
    }
}
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(int);
    int element = 7;
    int found = binary_search(arr, size, element);
    printf("our %d is found at %d index number", element, found);
    return 0;
}