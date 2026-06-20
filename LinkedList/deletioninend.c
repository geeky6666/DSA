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
struct node *deletioninbetween(struct node *head){
    struct node *ptr=head;
    struct node *p=head->next;
    int i=0;
    while(p->next!=NULL){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=p->next;
    free(p);
    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=first;
    first->data=15;
    first->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    traversal(head);
    head=deletioninbetween(head);
    traversal(head);
    return 0;
}