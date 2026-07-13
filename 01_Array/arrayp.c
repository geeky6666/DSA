#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int total_size;
    int used_size;
    int *ptr;

};
void create(struct myarray *p,int tsize,int usize){
    p->total_size=tsize;
    p->used_size=usize;
    p->ptr=(int*)malloc(tsize*sizeof(int));
}
void set(struct myarray *p)
{
    int n;
    for(int i=0;i<p->used_size;i++){
        printf("Enter your value \n");
        scanf("%d",&n);
        (p->ptr)[i]=n;
    }
}
void show(struct myarray *p){
    for(int i=0;i<p->used_size;i++){
        printf("%d\n",p->ptr[i]);
    }
}
int main()
{
    struct myarray marks;
    create(&marks,10,2);
    set(&marks);
    show(&marks);
    return 0;
}