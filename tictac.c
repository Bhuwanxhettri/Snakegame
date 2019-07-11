#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
char a[]={'1','2','3','4','5','6','7','8','9'};
int k=0,end=1,count=0;
char ch;
void layout(){
      printf("\t\t\t Tic Tac TOE GAME");
      printf("\n\n\tPlayer 1 : X :\n");
      printf("\n\t Computer  : O : \n");
      printf("\n\t\t---|---|---");
      printf("\n\t\t %c | %c | %c",a[0],a[1],a[2]);
      printf("\n\t\t---|---|---");
      printf("\n\t\t %c | %c | %c",a[3],a[4],a[5]);
      printf("\n\t\t---|---|---");
      printf("\n\t\t %c | %c | %c",a[6],a[7],a[8]);
}
void choice(){
    char pos,cpos;
    int i;
    printf("\n\n<<<<<<<<>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
    printf(">>\tEnter a position: ");
    fflush(stdin);
    scanf("%c",&pos);
    if(k==0){
        for(i=0;i<=8;i++){
            if(a[i]==pos){
                 a[i]='x';
                 k=1;
                 count++;
            }
        }
    }
    if(k==1){
     if(a[0]=='1' && a[1]=='O' && a[2]=='O')
               cpos='1';
     else if(a[0]=='1' && a[4]=='O' && a[8]=='O')
               cpos='1';
     else if(a[0]=='1' && a[3]=='O' && a[6]=='O')
               cpos='1';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[1]=='2' && a[0]=='O' && a[2]=='O')
               cpos='2';
     else if(a[1]=='2' && a[4]=='O' && a[7]=='O')
               cpos='2';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[2]=='3' && a[0]=='O' && a[1]=='O')
               cpos='3';
     else if(a[2]=='3' && a[5]=='O' && a[8]=='O')
               cpos='3';
     else if(a[2]=='3' && a[6]=='O' && a[4]=='O')
               cpos='3';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[3]=='4' && a[0]=='O' && a[6]=='O')
               cpos='4';
     else if(a[3]=='4' && a[4]=='O' && a[5]=='O')
               cpos='4';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<>
     else if(a[4]=='5' && a[1]=='O' && a[7]=='O')
               cpos='5';
     else if(a[4]=='5' && a[3]=='O' && a[5]=='O')
               cpos='5';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[5]=='6' && a[2]=='O' && a[8]=='O')
               cpos='6';
     else if(a[5]=='6' && a[3]=='O' && a[4]=='O')
               cpos='6';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[6]=='7' && a[0]=='O' && a[3]=='O')
               cpos='7';
     else if(a[6]=='7' && a[4]=='O' && a[2]=='O')
               cpos='7';
     else if(a[6]=='7' && a[7]=='O' && a[8]=='O')
               cpos='7';
     //>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<>>>>>>>>>
     else if(a[7]=='8' && a[6]=='O' && a[8]=='O')
               cpos='8';
     else if(a[7]=='8' && a[1]=='O' && a[4]=='O')
               cpos='8';
     //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[8]=='9' && a[2]=='O' && a[5]=='O')
               cpos='9';
     else if(a[8]=='9' && a[0]=='O' && a[4]=='O')
               cpos='9';
     else if(a[8]=='9' && a[6]=='O' && a[7]=='O')
               cpos='9';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

     else if(a[0]=='1' && a[1]=='x' && a[2]=='x')
               cpos='1';
     else if(a[0]=='1' && a[4]=='x' && a[8]=='x')
               cpos='1';
     else if(a[0]=='1' && a[3]=='x' && a[6]=='x')
               cpos='1';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[1]=='2' && a[0]=='x' && a[2]=='x')
               cpos='2';
     else if(a[1]=='2' && a[4]=='x' && a[7]=='x')
               cpos='2';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[2]=='3' && a[0]=='x' && a[1]=='x')
               cpos='3';
     else if(a[2]=='3' && a[5]=='x' && a[8]=='x')
               cpos='3';
     else if(a[2]=='3' && a[6]=='x' && a[4]=='x')
               cpos='3';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[3]=='4' && a[0]=='x' && a[6]=='x')
               cpos='4';
     else if(a[3]=='4' && a[4]=='x' && a[5]=='x')
               cpos='4';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<>
     else if(a[4]=='5' && a[1]=='x' && a[7]=='x')
               cpos='5';
     else if(a[4]=='5' && a[3]=='x' && a[5]=='x')
               cpos='5';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[5]=='6' && a[2]=='x' && a[8]=='x')
               cpos='6';
     else if(a[5]=='6' && a[3]=='x' && a[4]=='x')
               cpos='6';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[6]=='7' && a[0]=='x' && a[3]=='x')
               cpos='7';
     else if(a[6]=='7' && a[4]=='x' && a[2]=='x')
               cpos='7';
     else if(a[6]=='7' && a[7]=='x' && a[8]=='x')
               cpos='7';
     //>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<>>>>>>>>>
     else if(a[7]=='8' && a[6]=='x' && a[8]=='x')
               cpos='8';
     else if(a[7]=='8' && a[1]=='x' && a[4]=='x')
               cpos='8';
     //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(a[8]=='9' && a[2]=='x' && a[5]=='x')
               cpos='9';
     else if(a[8]=='9' && a[0]=='x' && a[4]=='x')
               cpos='9';
     else if(a[8]=='9' && a[6]=='x' && a[7]=='x')
               cpos='9';
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     else if(pos=='1')
          cpos='5';
     else if(pos=='2')
          cpos='1';
     else if(pos=='5')
          cpos='3';
     else if(pos=='3')
          cpos='8';
     else if(pos=='4')
          cpos='7';
     else if(pos=='7')
          cpos='4';
     else if(pos=='6')
          cpos='2';
     else if(pos=='9')
          cpos='6';
     else if(pos=='8')
          cpos='9';

      for(i=0;i<=8;i++){
        if(a[i]==cpos){
                a[i]='O';
                 k=0;
                 count++;
            }
         }
    }
}
int winning(){
    if(a[0]=='x'&&a[1]=='x'&&a[2]=='x')
         return(100);
    else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
         return(100);
    else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
         return(100);
    else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
         return(100);
    else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
         return(100);
    else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
         return(100);
    else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
         return(100);
    else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
         return(100);
 // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<//
   else if(a[0]=='O'&&a[1]=='O'&&a[2]=='O')
         return(200);
    else if(a[0]=='O'&&a[3]=='O'&&a[6]=='O')
         return(200);
    else if(a[0]=='O'&&a[4]=='O'&&a[8]=='O')
         return(200);
    else if(a[1]=='O'&&a[4]=='O'&&a[7]=='O')
         return(200);
    else if(a[2]=='O'&&a[4]=='O'&&a[6]=='O')
         return(200);
    else if(a[2]=='O'&&a[5]=='O'&&a[8]=='O')
         return(200);
    else if(a[3]=='O'&&a[4]=='O'&&a[5]=='O')
         return(200);
    else if(a[6]=='O'&&a[7]=='O'&&a[8]=='O')
         return(200);
    else
        return(300);
}
void gamewon(){
    int var;
    var=winning();
    if(var==100){
        printf("\nPlayer 1 won!!");
        count=0;
        k=0;
        getch();
        end=0;
    }
    else if(var==200){
        printf("\n\nComputer win the Game!! ");
        printf("\n\n YOU Loose the GAME");
        count=0;
        k=0;
        getch();
        end=0;
    }
    else if(count>8){
        printf("\t\n\n!!Game Draw!!");
        k=0;
        count=0;
        getch();
        end=0;
    }
}
void main(){
    label:
    system("color 5a");
    system("cls");
    layout();
    while(end){
        choice();
        system("cls");
        layout();
        gamewon();
    }
    system("cls");
    printf("\nDo you want to paly the game again : ");
    printf("\n Y for  yes and N for NO\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        end=1;
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';
        goto label;

    }

    else if(ch=='n'||ch=='N')
    {
        printf("\n Thank you for playing the game");
        getch();
        exit(0);
    }
}

