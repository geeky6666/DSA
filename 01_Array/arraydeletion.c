#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void deletion(int arr[], int capacity, int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int capacity = 10;
    int size = 6;
    int index = 2;
    deletion(arr, capacity, size, index);
    size--;
    display(arr, size);
}