#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *st){
    if(st->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack *st){
    if(st->top=st->size-1){
        return 1;
    }
    return 0;
}
int isMatch(char a,char b){
    if(a=="(" && b==")"){
        return 1;
    }
    if(a=="[" && b=="]"){
        return 1;
    }
    if(a=="{"&&b=="}"){
        return 1;
    }
    return 0;
}
void push(struct stack *st,char val){
    if(isFull(st)){
        printf("Stack is Full\n");
    }
    else{
        st->top++;
        st->arr[st->top]=val;
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
int parenthesis(char *exp){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=100;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    char chopped_arr;
    for(int i=0;exp[i]!="\0";i++){
        if(exp[i]=='('||exp[i]=='['||exp[i]=='}'){
            push(sp,exp[i]);
        }
        else if(exp[i]==')'||exp[i]==']'||exp[i]=='}'){
            if(isEmpty(sp)){
                return 0;
            }
            chopped_arr=pop(sp);
            if(!isMatch(chopped_arr,exp[i])){
                return 0;
            }
        }
    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    char *exp="{4*8-[3+2]/(5*8)}";
    if(parenthesis(exp)){
        printf("The parenthesis is balanced\n");
    }
    else{
        printf("The parenthesis is not balanced \n");
    }
    return 0;
}