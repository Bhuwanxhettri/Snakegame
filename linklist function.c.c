#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
     int info;
     struct node *prev;
     struct node *next;
};
void insertstart(struct node **s,int data);
void insertlast(struct node **s,int data);
struct node* find(struct node **s,int data);
void insertafter(struct node **s,struct node *ptr,int data);
int deletefirst(struct node **s);
int deletelast(struct node **s);
int deleteintermediate(struct node **s,struct node *ptr);
void viewlist(struct node **s);
int getfirst(struct node **s);
int getlast(struct node **s);
void main()
{
    struct node *start=NULL,*ptr;
    insertstart(&start,10);
    insertlast(&start,20);
    insertlast(&start,30);
    ptr=find(&start,10);
    insertafter(&start,ptr,100);
    viewlist(&start);

   getch();
}
void insertstart(struct node **s,int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->info=data;
    p->prev=NULL;
    p->next=*s;
    *s=p;
}
void insertlast(struct node **s,int data)
{
    struct node *p,*t;
    p=(struct node*)malloc(sizeof(struct node));
    p->info=data;
    p->next=NULL;
    t=*s;
    if(*s==NULL)
    {
        p->prev=NULL;
        *s=p;
    }
    else
    {
       while(t->next!=NULL)
             t=t->next;
       p->prev=t;
       t->next=p;
    }
}
void insertafter(struct node **s,struct node *ptr,int data)
{
    struct node *p;
    if(ptr==NULL)
        printf("invalid insertion");
    else
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->info=data;
        p->prev=ptr;
        p->next=ptr->next;
        if(ptr->next!=NULL)
            ptr->next->prev=p;
        ptr->next=p;
    }


}
struct node* find(struct node **s,int data)
{
    struct node *t;
    if(*s==NULL)
        return(NULL);
    else
    {
        t=*s;
        while(t!=NULL)
        {
            if(t->info==data)
                return(t);
         t=t->next;
        }
        return(NULL);
    }
}
int deletefirst(struct node **s)
{
    struct node *t;
    if(*s==NULL)
        return(0);
    else
    {
     t=*s;
     *s=(*s)->next;
     (*s)->prev=NULL;
     free(t);
    return(1);
    }

}
int deletelast(struct node **s)
{
    struct node *t;
    if(*s==NULL)
        return(0);
    t=*s;
    while(t->next!=NULL)
        t=t->next;
    if((*s)->next==NULL)
        *s=NULL;
    else{
        t->prev->next=NULL;
        free(t);
        return(1);
    }

}
int deleteintermediate(struct node **s,struct node *ptr)
{
    if(*s==NULL)
        return(0);
    if(ptr->prev==NULL)
    {
        *s=ptr->next;
        free(ptr);
        return(1);
    }
    if(ptr->next==NULL){
        ptr->prev->next=ptr->next;
        free(ptr);
        return(1);
    }
    ptr->prev->next=ptr->next;
    ptr->next->prev=ptr->prev;
    free(ptr);
    return(1);
}
void viewlist(struct node **s)
{

    struct node *t;
    if(*s==NULL)
        printf("List is empty");
    else
    {
        t=*s;
        while(t!=NULL){
            printf("%d ",t->info);
            t=t->next;
        }
    }
}
int getfirst(struct node **s)
{
    if(*s==NULL){
        printf("list is empty");
        return(-1);
    }
    else
       return((*s)->info);
}
int getlast(struct node **s)
{
    struct node *t;
    if(*s==NULL){
        printf("list is empty");
        return(-1);
    }
    else
    {
        t=*s;
        while(t->next!=NULL)
            t=t->next;
        return(t->info);
    }
}










