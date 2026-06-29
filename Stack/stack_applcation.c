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
void push(struct myarray *st,char value){
    if(isFull(st)){
        printf("Stack is Full\n");
    }
    else{
        st->top++;
        st->arr[st->top]=value;
    }
}
char pop(struct myarray *st){
    if(isEmpty(st)){
        printf("Stack is Empty\n");
    }
    else{
        int value=st->arr[st->top];
        st->top--;
    }
}
int parenthesis(char *exp){
    struct myarray *st=(struct myarray*)malloc(sizeof(struct myarray));
    st->size=100;
    st->top=-1;
    st->arr=(char*)malloc(st->size*sizeof(char));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
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
    char *surya="(3*2(2+3))";
    if(parenthesis(surya)){
        printf("parenthesis is matching\n");
    }
    else{
        printf("parenthesis is not matching \n");
    }
    return 0;
}