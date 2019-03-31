#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=20,height=20,gameover,flag;
int x,y,fruitx,fruity,score;
int tailx[100],taily[100],count=0;
void setup()
{
    gameover=0;
    x=height/2;
    y=width/2;
    label1:
    fruitx=rand()%20;
    if(fruitx==1)
        goto label1;
    fruity=rand()%20;
    label2:
    if(fruity==1)
        goto label2;
    score=0;

}
void layout()
{
    int i,j,k;
    printf("      SNAKE GAME   ");
    printf("\n\n");
    printf("score = %d\n",score);
    for(i=0;i<width;i++)
    {
        for(j=0;j<height;j++)
        {  if(i==0||i==width-1||j==0||j==height-1)
                     printf("*");
           else
              {
                  if(i==y&&j==x)
                      printf("0");
                  else if(i==fruity&&j==fruitx)
                      printf("F");
                  else
                    {
                        int ch=0;
                      for(k=0;k<count;k++)
                        {
                            if(i==taily[k]&&j==tailx[k])
                                {
                                    printf("o");
                                    ch=1;
                                }
                        }
                    if(ch==0)
                        printf(" ");
                    }
              }
        }
        printf("\n");
    }
}
void input()
{
    if(kbhit()){
        switch(getch())
        {
        case 'a':
            flag=1;
            break;
        case 'd':
            flag=2;
            break;
        case 'w':
            flag=3;
            break;
        case 's':
            flag=4;
            break;
         case 'x':
             flag=5;
            break;
        }
    }
}
void mainlogic()
{
    int i;
    int prevx=tailx[0];
    int prevy=taily[0];
    int prev2x,prev2y;
    tailx[0]=x;
    taily[0]=y;
    for(i=1;i<count;i++)
    {
        prev2x=tailx[i];
        prev2y=taily[i];
        tailx[i]=prevx;
        taily[i]=prevy;
        prevx=prev2x;
        prevy=prev2y;
    }
    switch(flag)
    {
        case 1:
            x--;
           break;
        case 2:
            x++;
           break;
        case 3:
            y--;
           break;
        case 4:
            y++;
           break;
        case 5:
           exit(1);
    }
    if(x<=0||x>=height-1||y<=0||y>=width-1){
        gameover=1;
        system("cls");
        printf("\n\n \n\tGAME OVER\n\n ");
        printf("\tSCORE=%d\n",score);
    }
    for(i=0;i<count;i++){
        if(tailx[i]==x&&taily[i]==y)
            gameover=1;
    }
    if(x==fruitx&&y==fruity){
      label3:
      fruitx=rand()%20;
      if(fruitx==0)
         goto label3;
      fruity=rand()%20;
      label4:
      if(fruity==0)
         goto label4;
      score+=10;
      count++;
    }
}
void main()
{
    int i,j;
    char option;
    label5:
    setup();
    while(!gameover)
    {
       system("cls");
       layout();
       input();
       mainlogic();
       for(i=0;i<2000;i++){
        for(j=0;j<40000;j++){

        }
       }
    }
    label6:
    printf("\nYES FOR 'Y' NO FOR 'N'\n");
    printf("\n\nDo you want to start a game again : ");
    scanf("%c",&option);
    fflush(stdin);
    if(option=='Y'||option=='y'){

         goto label5;
    }
    else if (option=='n'||option=='N'){
        printf("\n\n\tTHANK YOU FOR PLAYING");
        exit(1);
    }
    else{
          system("cls");
          goto label6;
    }
    getch();
}

