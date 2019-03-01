#include<stdio.h>
#include<conio.h>
char square[10]={'0','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main()
{

    int player=1,i,choice;
    char mark,ch;

    do
    {
       // start:
        board();
        player=(player%2)?1:2;
        printf("\n\n\t\t\tPlayer %d,enter a number :\n\n",player);
        printf("\t\tIF YOU WANT EXIST THE GAME PRESS ESC BUTTON 2 TIMES ");
        printf("\n\n\n\t\t\tGAME MAKER SUNNY SINGH\n");
        //scanf("%d",&choice);//in which player press the enter key
        choice=getch();
        mark=(player==1)?'X':'O';

        if(choice==49 && square[1]=='1')//if player press enter key then choice=1 and change in all below cases
            square[1]=mark;
        else if(choice==50 && square[2]=='2')
            square[2]=mark;
        else if(choice==51 && square[3]=='3')
            square[3]=mark;
        else if(choice==52 && square[4]=='4')
            square[4]=mark;
        else if(choice==53 && square[5]=='5')
            square[5]=mark;
        else if(choice==54 && square[6]=='6')
            square[6]=mark;
        else if(choice==55 && square[7]=='7')
            square[7]=mark;
        else if(choice==56 && square[8]=='8')
            square[8]=mark;
        else if(choice==57 && square[9]=='9')
            square[9]=mark;
        else if(choice==27)
            exit(0);
        else
        {
            printf("\nInvalid Move\n");
            player--;
            getch();
        }
        i=checkwin();
        player++;

    }while(i==-1);

    board();
    if(i==1)
        printf("==>\aPlayer %d win",--player);
       /* printf("\nyou want again play game Y & N: ");
        if(ch=='y'||ch=='Y')
         {goto start;}*/
    else
        printf("==>\aGame Draw");
       /* printf("\nyou want again play game Y & N: ");
        if(ch=='y'||ch=='Y')
          {goto start;}*/
    getch();
    return 0;

}

int checkwin()
{
    if(square[1]==square[2] && square[2]==square[3])
        return 1;
    else if(square[4]==square[5] && square[5]==square[6])
        return 1;
    else if(square[7]==square[8] && square[8]==square[9])
        return 1;
    else if(square[1]==square[4] && square[4]==square[7])
        return 1;
    else if(square[2]==square[5] && square[5]==square[8])
        return 1;
    else if(square[3]==square[6] && square[6]==square[9])
        return 1;
    else if(square[1]==square[5] && square[5]==square[9])
        return 1;
    else if(square[3]==square[5] && square[5]==square[7])
        return 1;
    else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' &&
            square[7]!='7' && square[8]!='8' && square[9]!='9')
            return 0;
    else
        return -1;

}

void board()
{
        system("cls");
    printf("\n\n\t\t\t\t TIC TOE\n\n");
    printf("\t\t\tPLAYER 1 (X) AND PLAYER 2 (O)\n\n\n");
    printf("\t\t\t        |      |      \n");
    printf("\t\t\t    %2c  |  %2c  |  %2c  \n",square[1],square[2],square[3]);
    printf("\t\t\t  ______|______|______\n");
    printf("\t\t\t        |      |      \n");
    printf("\t\t\t    %2c  |  %2c  |  %2c  \n",square[4],square[5],square[6]);
    printf("\t\t\t  ______|______|______\n");
    printf("\t\t\t        |      |      \n");
    printf("\t\t\t    %2c  |  %2c  |  %2c  \n",square[7],square[8],square[9]);
    printf("\t\t\t        |      |      \n");

}
