#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *sp){
    if(sp->top==-1){
        printf("Stack is Empty\n");

    }
    return 0;
}
int isfull(struct stack *sp){
    if(sp->top==sp->size-1){
        printf("stack is full\n");
    }
    return 0;
}
void push(struct stack *sp,int val){
    if(isfull(sp)){
        printf("Stack is Full \n");
    }
    else{
        sp->top++;
        sp->arr[sp->top]=val;
        printf("%d\n",val);
    }
}
int pop(struct stack *sp){
    if(isempty(sp)){
        printf("Stack is Full\n");
    }
    else{
        int val=sp->arr[sp->top];
        sp->top--;
        return val;
        printf("%d\n",val);
    }
}
int main()
{
    struct stack *surya=(struct stack*)malloc(sizeof(struct stack));
    surya->size=10;
    surya->top=-1;
    surya->arr=(int*)malloc(surya->size*sizeof(int));
    push(surya,10);
    push(surya,20);
    push(surya,30);
    printf("%d\n",pop(surya));
    return 0;
}