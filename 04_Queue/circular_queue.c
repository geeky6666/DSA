#include<stdio.h>
#include<stdlib.h>

struct circularueue{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct circularueue *p){
    if(p->r==p->f){
        return 1;
    }
    return 0;
}
int isFull(struct circularueue *p){
    if((p->r+1)%p->size==p->f){
        return 1;
    }
    return 0;
}
void enqueue(struct circularueue *p,int val){
    if(isFull(p)){
        printf("Queue is Full\n");
    }
    else{
        p->r=(p->r+1)%p->size;
        p->arr[p->r]=val;
    }
}
int dequeue(struct circularueue *p){
    int a= -1;
    if(isEmpty(p)){
        printf("Queue is Empty\n");
    }
    else{
        p->f=(p->f+1)%p->size;
        a=p->arr[p->f];
        return a;
        
    }
}
int main()
{
    struct circularueue p;
    p.size=10;
    p.f=p.r=0;
    p.arr=(int *)malloc(p.size*sizeof(int));
    if(isEmpty(&p)){
        printf("Queue is Empty \n");
    }
    enqueue(&p,10);
    enqueue(&p,20);
    enqueue(&p,30);
    printf("%d\n",dequeue(&p));
    printf("%d\n",dequeue(&p));
    if(isFull(&p)){
        printf("Queue is Full \n");
    }
    return 0;

}