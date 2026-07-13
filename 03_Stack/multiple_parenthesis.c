#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *st){
    if(st->top=-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *st){
    if(st->top=st->size-1){
        return 1;
    }
    return 0;
}
void push(struct stack *st,int data){
    if(isFull(st)){
        printf("Stack is Full \n");
    }
    else{
        st->top++;
        st->arr[st->top]=data;
    }
}
char pop(struct stack *st){
    if(isEmpty(st)){
        printf("Stack is Empty\n");
    }
    else{
        char val=st->arr[st->top];
        st->top--;
        printf("%c\n",val);
        return val;
    }
}
int ismatch(char a,char b){
    if(a=='('&& b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    return 0;
}
int parenthesis(char *exp){
    struct stack *st=(struct stack*)malloc(sizeof(struct stack));
    st->size=100;
    st->top=-1;
    char chopped_arr;
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{'){
            push(st,exp[i]);
        }
        else if(exp[i]==')'||exp[i]==']'||exp[i]=='}'){
            if(isEmpty(st)){
                return 1;
            }
            chopped_arr=pop(st);
            if(!ismatch(chopped_arr,exp[i])){
                return 0;
            }

        }
    }
    if(isEmpty(st)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char *exp="[3+2-3-8+{5-2}-(3-5)]}]";
    if(parenthesis(exp)){
        printf("Success\n");

    }
    else{
        printf("Not matching\n");
    }
    return 0;
}