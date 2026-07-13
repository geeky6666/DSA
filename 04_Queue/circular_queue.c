#include<stdio.h>
#include<stdlib.h>
struct circularQueue{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct circularQueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int isFull(struct circularQueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}
void enqueue (struct circularQueue *q,int val){
    if(isFull(q)){
        printf("Queue is Full \n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}
int dequeue(struct circularQueue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("Queue is Empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
        return a;
    }
}
int main(){
    struct circularQueue st;
    st.size=10;
    st.f=st.r=0;
    st.arr=(int*)malloc(st.size*sizeof(int));
    if(isEmpty(&st)){
        printf("Queue is Empty\n");
    }
    enqueue(&st,10);
    enqueue(&st,20);
    enqueue(&st,30);
    printf("%d\n",dequeue(&st));
    if(isFull(&st)){
        printf("Queue is Full \n");

    }
    return 0;
}