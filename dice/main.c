#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int dice1,dice2,dice3,i,res,turn1,turn2,turn3,turn;
    char ret,sm,la;
    //char yes, no;
    srand(time(NULL));
    printf("roll the dices\n");
        dice1=(rand()%6) +1;
        printf("%d\t",dice1);
        dice2=(rand()%6)+1;
        printf("%d\t",dice2);
        dice3=(rand()%6)+1;
        printf("%d",dice3);
        printf("\n");

    res=dice1+dice2+dice3;
    printf("sum: %d\n",res);
    printf("whats your bet?(l/s)\t");
    scanf("%c",&ret);
    if(ret=='la')
       {
           printf("Bet on LARGER\n");
       }
     else if(ret=='sm')
        {
            printf("Bet on SMALLER\n");
        }
    else
    {
        printf("wrong input");
        exit(0);
    }

    turn1=(rand()%6) +1;
    printf("%d\t",turn1);
    turn2=(rand()%6) +1;
    printf("%d\t",turn2);
    turn3=(rand()%6) +1;
    printf("%d\t",turn3);

    turn=turn1+turn2+turn3;
    printf("\nnew sum: %d\ns",turn);
    if(turn>=res)
    {
        printf("Its larger or equal\n");
    }
    else
    {
        printf("Its Smaller\n");
    }
    if((ret=='la') && (turn>res))
    {
        printf("You Won");
    }
    else if((ret=='sm') && (turn<res))
    {
        printf("You Won");
    }
    else
    {
        printf("You loose");
    }
    return 0;
}
