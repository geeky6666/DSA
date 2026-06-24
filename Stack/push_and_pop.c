#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *st){
    if(st->top==-1){
        printf("Stack is Empty\n");
    }
    return 0;
}
int isFull(struct stack *st){
    if(st->top==st->size-1){
        printf("Stack is Full \n");
    }
    return 0;
}
void push(struct stack *st,int val){
    if(isFull(st)){
        printf("Stack is Full\n");
    }
    else{
        st->top++;
        st->arr[st->top]=val;
    }

}
int pop(struct stack *st){
    if(isEmpty(st)){
        printf("Stack is Emplty\n");

    }
    else{
        int val=st->arr[st->top];
        st->top--;
        return val;
    }
}
int peek(struct stack *st,int i){
    if(st->top-i+1<+0){
        printf("Invalid Position \n");
    }
    else{
        return st->top-i+1;
    }
}
int main()
{
    struct stack *surya=(struct stack*)malloc(sizeof(struct stack));
    surya->size=5;
    surya->top=-1;
    surya->arr=(int*)malloc(surya->size*sizeof(struct stack));
    push(surya,10);
    push(surya,20);
    push(surya,30);
    push(surya,40);
    int x=pop(surya);
    printf("%d\n",x);
    int y=peek(surya,2);
    printf("%d\n",y);
    return 0;

}