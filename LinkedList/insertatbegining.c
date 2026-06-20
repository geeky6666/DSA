#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *insertatbegining(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=31;
    head->next=second;
    second->data=41;
    second->next=third;
    third->data=51;
    third->next=fourth;
    fourth->data=61;
    fourth->next=NULL;
    traverse(head);
    printf("HEHE\n");
    head=insertatbegining(head,21);
    traverse(head);
    return 0;

}