#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *tp)
{
    while (tp != NULL)
    {
        printf("%d\n", tp->data);
        tp = tp->next;
    }
}
int isEmpty(struct node *tp)
{
    if (tp->next == NULL)
    {
        return 1;
    }
    else
        return 0;
}
int isFull(struct node *tp)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}
struct node *push(struct node *tp, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (isFull(tp))
    {
        printf("Stack is Full\n");
    }
    else
    {
        ptr->data = data;
        ptr->next = tp;
        tp = ptr;
        return tp;
    }
}
int peek(struct node *top,int pos)
{
    struct node *ptr=top;
    for (int i=0;i<pos-1 && ptr!= NULL;i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}
int pop(struct node *tp)
{
    struct node *ptr=tp;
    tp=tp->next;
    int x=ptr->data;
    free(ptr);
    printf("%d\n",x);
    return x;

}
int main()
{
    struct node *surya=NULL;
    surya=push(surya,10);
    surya=push(surya,20);
    surya=push(surya,30);
    surya=push(surya,40);
    pop(surya);
    peek(surya,2);
    traversal(surya);
    return 0;
}
