#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct myarray *st){
    if(st->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct myarray *st){
    if(st->top==st->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct myarray *st,char data){
    if(isFull(st)){
        printf("Stack is Full \n");
    }
    else{
        st->top++;
        st->arr[st->top]=data;
    }
}
char pop(struct myarray *st){
    if(isEmpty(st)){
        printf("Stack is Empty \n");
    }
    else{
        char data=st->arr[st->top];
        st->top--;
        return data;
    }
}
int parantesismatching(char *exp){
    struct myarray *st=(struct myarray*)malloc(sizeof(struct myarray));
    st->size=100;
    st->top=-1;
    st->arr=(char*)malloc(st->size*sizeof(char));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(')
        {
            push(st,'(');

        }
        else if(exp[i]==')'){
            if(isEmpty(st)){
                return 0;
            }
            pop(st);
        }
    }
    if(isEmpty(st)){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char *exp="(8*5+(4*6/(4-8)))))";
    if(parantesismatching(exp)){
        printf("Paranthesis is Matching \n");
    }
    else{
        printf("Paranthesis is not matching \n");
    }
    return 0;
}
