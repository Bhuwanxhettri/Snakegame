#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* createlist(struct node *last);
//<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<>>>>>>>>>>..
void display(struct node *last);
struct node* addtoempty(struct node *last,int value);
struct node* addatbeg(struct node *last,int value);
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
struct node* addatend(struct node *last,int value);
struct node* addafter(struct node *last,int value,int iteam);
struct node* del(struct node *last,int value);
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void main()
{
    int choice,value,item;
    struct node *last=NULL;
    while(1)
    {
        system("cls");
        printf("\n1.Create list ");
        printf("\n2.Display list");
        printf("\n3.Add to empty list");
        printf("\n4.Add at beginning");
        printf("\n5. Add at end");
        printf("\n6.Add after");
        printf("\n7. Delete");
        printf("\n8.Exit");
        //////<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>
        printf("\n\n Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            last=createlist(last);
            break;
        case 2:
            display(last);
            break;
        case 3:
            printf("Enter a number for the list : ");
            scanf("%d",&value);
            last=addtoempty(last,value);
            break;
        case 4:
            printf("Enter  a number for the  list : ");
            scanf("%d",&value);
            last=addatbeg(last,value);
            break;
        case 5:
            printf("enter a number for the list : ");
            scanf("%d",&value);
            last=addatend(last,value);
            break;
        case 6:
            printf("enter a number for the list : ");
            scanf("%d",&value);
            printf("enter a item value after new value to be added");
            scanf("%d",&item);
            last=addafter(last,value,item);
            break;
        case 7:
            printf("enter the value to be deleted : ");
            scanf("%d",&value);
            last=del(last,value);
            break;
        case 8:
            exit(0);
        default:
            printf("invlaid choice");

        }//end of switch
        getch();
    }//end of while loop

}
//??????????????????????????????????????????????????????????????????????????????????????????
struct node* createlist(struct node *last)
{
    int n,i,value;
    printf("how many values you want to enter : ");
    scanf("%d",&n);
    printf("enter first data for the list");
    scanf("%d",&value);
    last=addtoempty(last,value);
    for(i=2;i<=n;i++)
    {
        printf("enter data for the list");
        scanf("%d",&value);
        last=addatend(last,value);
    }
    return(last);
}
//<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>><<<<<<<<<<<<>>>>>>>>>
struct node* del(struct node *last,int value)
{
    struct node *t,*p;
    if(last==NULL){
        printf("list is empty");
        return(last);
    }
    if(last==last->next&&last->data==value)
    {
        t=last;
        last=NULL;
        free(t);
        return(last);
    }
    if(last->next->data==value)
    {
        t=last->next;
        last->next=t->next;
        free(t);
        return(last);
    }
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>><<<<>
struct node* addafter(struct node *last,int value,int iteam)
{
    struct node *t,*n;
    t=last->next;
    do{
        if(t->data==iteam)
        {
            n=(struct node*)malloc(sizeof(struct node));
            n->data=value;
            n->next=t->next;
            t->next=n;
            if(t==last)
                last=n;
        return(last);
        }
        t=t->next;
        printf("%d is not in the list",iteam);
        return(last);
    }while(t!=last->next);

}
//>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>
struct node* addatend(struct node *last,int value)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=value;
    n->next=last->next;
    last->next=n;
    last=n;
    return(last);
}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>
struct node* addtoempty(struct node *last,int value)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=value;
    last=n;
    last->next=last;
    return(last);
}
//<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>><
struct node* addatbeg(struct node *last,int value)
{
   struct node *n;
   n=(struct node*)malloc(sizeof(struct node));
   n->data=value;
   n->next=last->next;
   last->next=n;
   return(last);
}
//>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>><
void display(struct node *last)
{
    struct node *t;
    if(last==NULL)
        printf("List is empty");
    else
    {
          t=last->next;
          do
          {
              printf("%d ",t->data);
              t=t->next;
          }while(t!=last->next);

    }
}
