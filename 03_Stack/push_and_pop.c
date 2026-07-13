#include<stdio.h>
#include<stdlib.h>

struct myarray{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct myarray *tp){
    if(tp->top==-1){
        return -1;
    }
    else
    return 0;
}
int isFull(struct myarray *tp){
    if(tp->top==tp->size-1){
        return -1;
    }
    else
    return 0;
}
int push(struct myarray *tp,int data){
    if(isFull(tp)){
        printf("Stack is Full\n");
    }
    
        tp->top++;
        tp->arr[tp->top]=data;
        printf("%d\n",data);

    


}
int pop(struct myarray *tp){
    if(isEmpty(tp)){
        printf("Stack is already Full\n");
    }
    
        int val=tp->arr[tp->top];
        tp->top--;
        printf("%d\n",val);
        return val;
    
}
int peek(struct myarray *tp,int i){
    if(tp->top-i+1<0){
        printf("Invalid Entry\n");
        return -1;
    }
    else{
        return tp->arr[tp->top-i+1];

    }
}
int main(){
    struct myarray *surya=(struct myarray*)malloc(sizeof(struct myarray));
    surya->size=5;
    surya->top=-1;
    surya->arr=(int*)malloc(surya->size*sizeof(int));
    push(surya,10);
    push(surya,20);
    push(surya,30);
    push(surya,40);
    int x= pop(surya);
    printf("%d\n",x);
    printf("%d\n",peek(surya,1)); 
    for(int j=1;j<=surya->top+1;j++){
        printf("%d\n",peek(surya,j));
    }  
    return 0;

}