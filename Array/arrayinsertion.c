#include<stdio.h>

int insert(int arr[],int capacity,int size,int element,int index){
    if(size>=capacity)
    {
        printf("overflow");
    }
    else{
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}

}
void show(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={2,5,7,9,11,13,15};
    int capacity=100;
    int size=7;
    int index=2;
    int element=8;
    insert(arr,capacity,size,element,index);
    size+=1;
    show(arr,size);
    return 0;
}