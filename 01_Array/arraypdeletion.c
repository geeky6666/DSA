#include<stdio.h>
void deletion(int capacity,int size,int arr[],int index){
    for(int i=index;i<size-1;i++){
        arr[i+1]=arr[i];
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[]={1,3,5,6,7};
    int capacity=10;
    int size=5;
    int index=3;
    deletion(capacity,size,arr,index);
    size--;
    display(arr,size);
    return 0;
}
