#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *head){
    struct node *ptr;
    ptr=head;
    do
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);

}
struct node *insertatbeginning(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    while(p->next!=head){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=head;
    return ptr;

}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=head;
    traversal(head);
    head=insertatbeginning(head,5);
    traversal(head);
    return 0;
}