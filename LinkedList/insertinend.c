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
struct node *insertinend(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    while(p!=NULL){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
    return head;

}
int main(){
    struct node *head;
    struct node *first;
    struct node *second;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    head->data=30;
    head->next=first;
    first->data=35;
    first->next=second;
    second->data=40;
    second->next=NULL;
    traversal(head);
    head=insertinend(head,50);
    traversal(head);
    return 0;


}