#include<stdio.h>

void insert(int arr[],int capacity,int size,int index,int element){
    
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}
void show(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={2,3,4,5,8,9,10};
    int capacity=15;
    int size=7;
    int index=4;
    int element=6;
    insert(arr,capacity,size,index,element);
    size++;
    show(arr,size);
    printf("Hello");
    return 0;


}