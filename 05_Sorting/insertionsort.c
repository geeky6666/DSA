#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void insertion(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int i[] = {2, 3, 8, 7, 9, 13, 11, 5};
    int n = 8;
    display(i, n);
    printf("\n");
    insertion(i, n);
    display(i, n);
    return 0;
}