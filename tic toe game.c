#include<stdio.h>
char a[]={'1','2','3','4','5','6','7','8','9'};
int k=0,end=1,count=0;
void layout(){
      printf("\t\t\t Tic Tac TOE GAME");
      printf("\n\n\tPlayer 1 : X :\n");
      printf("\n\tPlayer 2 : O : \n ");
      printf("\n\t\t---|---|---");
      printf("\n\t\t %c | %c | %c",a[0],a[1],a[2]);
      printf("\n\t\t---|---|---");
      printf("\n\t\t %c | %c | %c",a[3],a[4],a[5]);
      printf("\n\t\t---|---|---");
      printf("\n\t\t %c | %c | %c",a[6],a[7],a[8]);
}
void choice(){
    char pos;
    int i;
    printf("\n\n<<<<<<<<>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
    printf(">>\tEnter a position: ");
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
    else{
         for(i=0;i<=8;i++){
            if(a[i]==pos){
                a[i]='o';
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
   else if(a[0]=='o'&&a[1]=='o'&&a[2]=='o')
         return(200);
    else if(a[0]=='o'&&a[3]=='0'&&a[6]=='o')
         return(200);
    else if(a[0]=='o'&&a[4]=='o'&&a[8]=='o')
         return(200);
    else if(a[1]=='o'&&a[4]=='o'&&a[7]=='o')
         return(200);
    else if(a[2]=='o'&&a[4]=='o'&&a[6]=='o')
         return(200);
    else if(a[2]=='o'&&a[5]=='o'&&a[8]=='o')
         return(200);
    else if(a[3]=='o'&&a[4]=='o'&&a[5]=='o')
         return(200);
    else if(a[6]=='o'&&a[7]=='o'&&a[8]=='o')
         return(200);
    else
        return(300);
}
void gamewon(){
    int var;
    var=winning();
    if(var==100){
        printf("\nPlayer 1 won!!");
        end=0;
    }
    else if(var==200){
        printf("\nPlayer 2 won!! ");
        end=0;
    }
    else if(count>9){
        printf("!!Game Draw!!");
    }
}
void main(){
    layout();
    while(end){
        choice();
        system("cls");
        layout();
        gamewon();
    }
        getch();
}


