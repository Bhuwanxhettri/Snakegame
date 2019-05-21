#include<stdio.h>
#include<conio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *START=NULL;
struct node* createnode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}
void insertnode()
{
    struct node *t,*temp;
    temp=createnode();
    printf("enter a number : ");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)
        START=temp;
    else
    {
        t=START;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}
void deletenode()
{
    struct node *r;
    if(START==NULL){
        printf("LIST IS EMPITY");
         getch();
    }
    else
    {
        r=START;
        START=START->link;
        free(r);
    }
}
void viewlist()
{
    struct node *t;
    if(START==NULL){
        printf("list is empty");
         getch();
    }
    else{
        t=START;
        while(t!=NULL){
            printf("%d ",t->info);
            t=t->link;
        }
        getch();
    }
}
void reverse()
{
    struct node *t=NULL;
    struct node *tt=NULL;
    while(START!=NULL)
    {
        tt=START->link;
        START->link=t;
        t=START;
        START=tt;
    }
    START=t;
    while(START!=NULL)
    {
        printf("%d ",START->info);
        START=START->link;
    }
    getch();
}
int menu()
{
    int ch;
    printf("Press 1 for add list\n");
    printf("Press 2 for delete first value\n");
    printf("Press 3 for view list\n");
    printf("Press 4 for reverse\n");
    printf("Press 5 for exit");
    printf("enter a choice :  ");
    scanf("%d",&ch);
    return(ch);
}
void main()
{
    while(1)
    {
        system("cls");
        switch(menu())
        {
        case 1:
            insertnode();
            break;
        case 2:
            deletenode();
            break;
        case 3:
            viewlist();
            break;
        case 4:
            reverse();
            break;
        case 5:
            exit(0);
        default:
            printf("invalid choice");
            getch();
            system("cls");
        }
    }
}


