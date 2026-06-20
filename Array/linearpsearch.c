#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,3,5,7,9,11};
    int size=sizeof(arr)/sizeof(int);
    int element=9;
    int found=linearsearch(arr,size,element);
    printf("our %d is found at %d index",element,found);
    return 0;
}