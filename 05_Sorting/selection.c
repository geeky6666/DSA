#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
}
void selectionsort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        int j;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
    }
}
int main(){
    int a[]={1,3,5,7,9,8,6,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    printarray(a,n);
    selectionsort(a,n);
    printf("\n");
    printarray(a,n);
    return 0;
}