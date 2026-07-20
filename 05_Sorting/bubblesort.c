#include<stdio.h>

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
void bubblesort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}
void issorted(int arr[],int n){
    int temp;
    int issorted=0;
    for(int i=0;i<n-1;i++){
        issorted=1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=0;
            }
        }
        if(issorted)
        return;
    }
}
int main()
{
    int a[]={2,4,3,5,8,9};
    int n= sizeof(a)/sizeof(a[0]);
    display(a,n);
    printf("%d");
    issorted(a,n);
    display(a,n);
    return 0;
}