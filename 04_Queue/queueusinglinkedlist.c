#include<stdio.h>
#include<stdlib.h>
struct node *f=NULL;
struct node *r=NULL;
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}
void enqueue(int value){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        printf("Queue is Already Full \n");
    }
    else{
        p->data=value;
        p->next=NULL;
        if(f==NULL){
            r=f=p;
        }
        else{
            r->next=p;
            r=p;
        }


    }
}
int dequeue()
{
    struct node *ptr=f;
    int a=-1;
    if(f==NULL){
        printf("Queue is Already Empty\n");
    }
    else{
        f=f->next;
        a=ptr->data;
        free(ptr);
    }
    return a;
}
int main(){
    traversal(f);
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("Dequeue is SuccessFull %d\n",dequeue());
    traversal(f);
    return 0;

}