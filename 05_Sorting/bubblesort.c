#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}
void bubblesort(int *arr,int n){
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
void onesort(int arr[],int n){
    int temp;
    int onesort=0;
    for(int i=0;i<n-1;i++){
        printf("Yeah %d\n",i+1);
        onesort=1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                onesort=0;
            }
        }
        if(onesort)
        return;
    }
}
int main()
{
    // int a[]={1,3,5,7,9,8,13,11};
    int a[]={1,3,5,7,12};
    int n=sizeof(a)/sizeof(a[0]);
    display(a,n);
    printf("\n");
    onesort(a,n);
    display(a,n);
    return 0;
}