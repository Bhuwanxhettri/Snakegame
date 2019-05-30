#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node* CreateNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}
void push(struct node **s,int item)
{
    struct node *n;
    if(n!=NULL){
       n=CreateNode();
       n->info=item;
       n->next=*s;
       *s=n;
    }
}
int pick(struct node **s)
{
    if(*s==NULL)
    {
        printf("stack is empty");
        return;
    }
    else
    {
        return((*s)->info);
    }
}
int pop(struct node **s)
{
    int item;
    struct node *r;
    if(*s==NULL)
    {
        printf("stack is empty");
        return;
    }
    else
    {
        item=(*s)->info;
        r=*s;
        *s=r->next;
        free(r);
        return(item);
    }
}
void removestack(struct node **s)
{
    while(*s!=NULL)
        pop(s);
}
void main()
{
    struct node *stack;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
    push(&stack,50);
    printf("%d ",pop(&stack));
    printf("%d ",pick(&stack));
}







