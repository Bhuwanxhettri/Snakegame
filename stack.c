#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Arraystack
{
    int top;
    int capacity;
    int *array;
};
struct Arraystack* createstack(int cap)
{
    struct Arraystack *stack;
    stack=malloc(sizeof(struct Arraystack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int)*stack->capacity);
    return(stack);

}
int isfull(struct Arraystack *stack)
{
    if(stack->top==stack->capacity-1)
        return(1);
    else
        return(0);
}
int isempty(struct Arraystack *stack)
{
    if(stack->top==-1)
        return(1);
    else
        return(0);
}
void push(struct Arraystack *stack,int item)
{
    if(!isfull(stack))
    {
        stack->top++;
        stack->array[stack->top]=item;
    }
}
int pop(struct Arraystack *stack)
{
    int item;
    if(!isempty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return(item);
    }
    return(-1);
}
void main()
{
    struct Arraystack *stack;
    stack=createstack(4);
    int choice,item;
    while(1)
    {
     system("cls");
     printf("1.PUSH");
     printf("\n2.Pop");
     printf("\n.Exit");
     printf("\nEnter your choice : ");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:

              if(stack->top==stack->capacity-1)
                   printf("\nStack IS FULL");
              else
               {
                   printf("\nenter a number : ");
                   scanf("%d",&item);
                   push(stack,item);
               }
              break;
         case 2:
              item=pop(stack);
              if(item==-1)
                 printf("\nStack is empty");
              else
                 printf("\npop value %d",item);
              break;
         case 3:
            exit(0);
         default:
            printf("\nInvalid choice");
     }
     getch();
    }
}
