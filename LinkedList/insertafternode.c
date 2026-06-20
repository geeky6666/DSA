#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *insertafternode(struct node *head,struct node *prevhead,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevhead->next;
    prevhead->next=ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    head->data=30;
    head->next=first;
    first->data=40;
    first->next=second;
    second->data=50;
    second->next=NULL;
    traversal(head);
    head=insertafternode(head,first,35);
    traversal(head);
    return 0;

}
