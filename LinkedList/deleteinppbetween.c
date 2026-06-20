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
struct node *deleteinbetween(struct node *head,int index){
    struct node *ptr=head;
    
    int i=0;
    while(i!=index-1){
        ptr=ptr->next;
        i++;
    }
    struct node *p=ptr->next;
    ptr->next=p->next;
    free(p);
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *first;
    struct node *third;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=30;
    head->next=first;
    first->data=40;
    first->next=second;
    second->data=50;
    second->next=third;
    third->data=60;
    third->next=NULL;

    traversal(head);
    head=deleteinbetween(head,2);
    traversal(head);
    return 0;
}