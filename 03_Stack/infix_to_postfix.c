#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *st){
    if(st->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *st){
    if(st->top==st->size-1){
        return 1;
    }
    return 0;
}
void push(struct stack *st,char value){
    if(isFull(st)){
        printf("Stack is Full \n");
    }
    else{
        st->top++;
        st->arr[st->top]=value;
    }
}
char pop(struct stack *st){
    if(isEmpty(st)){
        printf("Stack is empty\n");

    }
    else{
        char value=st->arr[st->top];
        st->top--;
        return value;
    }
}
char isoperator(char ch){
    return (ch == '/' || ch == '*' || ch == '+' || ch == '-');
}
int precedence(char ch){
    if(ch=='/'||ch=='*'){
        return 3;
    }
    else if(ch=='+'||ch=='-'){
        return 2;
    }
    else{
        return 0;
    }
}
char stacktop(struct stack *st){
    return st->arr[st->top];
}
char *parenthesis(char *infix){
    struct stack *st=(struct stack *)malloc(sizeof(struct stack));
    st->size=100;
    st->top=-1;
    st->arr=(char*)malloc(st->size*sizeof(char));
    char *postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])>precedence(stacktop(st))){
                push(st,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(st);
                j++;
            }
        }
    }
    while(!isEmpty(st)){
        postfix[j]=pop(st);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main(){
    char*ch="2+3*8-5+b";
    printf("%s",parenthesis(ch));
    return 0;
}