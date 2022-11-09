#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
    srand( time(NULL) );

    char name[20];
    int player_turn=0;
    int pc_turn=0;
    int win=0;
    int lose=0;
    int draw=0;
    int n,r=0;
    char mode;


    /* The Start of The Program */

    printf("\t\t\t\t\tWelcome To Rock Paper Scissors Game!\n");
    printf("\t\t\t\t\t         Version 5.3(Beta)                              HotKey:[For Zoom]\n");
    printf("\t\t\t\t\t     Game Credit: ShinySnorlax                      CTRL + MouseWheel(Up/Down)\n");
    printf("\t\t\t\t\t        Enjoy The Game! :D\n\n");
    /* ----------------------------------  */

    /* Ask's For Player Name */

    printf("Enter Your Name:  ");
    gets(name);
    /* ----------------------------------  */

    /* Determine GAME Mode */
    printf("\nGame Modes: ");
    printf("\n1) Classic Ride ");
    printf("\n2) Infinite Run ");
    printf("\n3) Custom Mode ");
    printf("\n\nSelect Mode:  ");
    scanf("%c", &mode);

    switch (mode)
    {
    case '1':
        while(r<5)
        {
        printf("\n\nSelect Your Option: \n");
        printf("1) Rock \n");
        printf("2) Paper \n");
        printf("3) Scissor \n");
        printf("Option: ");
        scanf("%d", &player_turn);

        pc_turn = (rand() % 3) + 1;
        r = r + 1;  //rounds determine

        if (pc_turn == ROCK)
            printf("Computer Throws ROCK! \n");
        else if(pc_turn == PAPER)
            printf("Computer Throws PAPER! \n");
        else if(pc_turn == SCISSORS)
            printf("Computer Throws SCISSORS! \n");


        if (player_turn == ROCK && pc_turn == SCISSORS)
        {
            printf("Rock Beats Scissors! %s Won! :D \n", name);
            win = win + 1;

        }
        else if(player_turn == ROCK && pc_turn == PAPER)
        {
            printf("Paper Beats Rock! %s Lost! \n", name);
            lose = lose + 1;

        }
        else if(player_turn == SCISSORS && pc_turn == PAPER)
        {
            printf("Scissors Beats Paper! %s Won! :D \n", name);
            win = win + 1;

        }
        else if(player_turn == SCISSORS && pc_turn == ROCK)
        {
            printf("Rock Beats Scissors! %s Lost! \n", name);
            lose = lose + 1;

        }
        else if(player_turn == PAPER && pc_turn == ROCK)
        {
            printf("Paper Beats Rock! %s Won! :D \n", name);
            win = win + 1;

        }
        else if(player_turn == PAPER && pc_turn == SCISSORS)
        {
            printf("Scissors Beats Paper! %s Lost! \n", name);
            lose = lose + 1;

        }
        else
        {
            printf("\nDraw! Play Again!");

        }

      }
      break;


    case '2':
        while(1)
        {
        printf("\n\nSelect Your Option: \n");
        printf("1) Rock \n");
        printf("2) Paper \n");
        printf("3) Scissor \n");
        printf("Option: ");
        scanf("%d", &player_turn);

        pc_turn = (rand() % 3) + 1;
        r = r + 1;  //rounds determine

        if (pc_turn == ROCK)
            printf("Computer Throws ROCK! \n");
        else if(pc_turn == PAPER)
            printf("Computer Throws PAPER! \n");
        else if(pc_turn == SCISSORS)
            printf("Computer Throws SCISSORS! \n");


        if (player_turn == ROCK && pc_turn == SCISSORS)
        {
            printf("Rock Beats Scissors! %s Won! :D \n", name);
            win = win + 1;
            printf("Won = %d Times || Lost = %d Times || Draw = %d", win, lose,draw);
        }
        else if(player_turn == ROCK && pc_turn == PAPER)
        {
            printf("Paper Beats Rock! %s Lost! \n", name);
            lose = lose + 1;
            printf("Won = %d Times || Lost = %d Times || Draw = %d", win, lose,draw);
        }
        else if(player_turn == SCISSORS && pc_turn == PAPER)
        {
            printf("Scissors Beats Paper! %s Won! :D \n", name);
            win = win + 1;
            printf("Won = %d Times || Lost = %d Times || Draw = %d", win, lose,draw);
        }
        else if(player_turn == SCISSORS && pc_turn == ROCK)
        {
            printf("Rock Beats Scissors! %s Lost! \n", name);
            lose = lose + 1;
            printf("Won = %d Times || Lost = %d Times || Draw = %d", win, lose,draw);
        }
        else if(player_turn == PAPER && pc_turn == ROCK)
        {
            printf("Paper Beats Rock! %s Won! :D \n", name);
            win = win + 1;
            printf("Won = %d Times || Lost = %d Times || Draw = %d", win, lose,draw);
        }
        else if(player_turn == PAPER && pc_turn == SCISSORS)
        {
            printf("Scissors Beats Paper! %s Lost! \n", name);
            lose = lose + 1;
            printf("Won = %d Times || Lost = %d Times || Draw = %d", win, lose,draw);
        }
        else
        {
            printf("\nIt Was a Draw!");
            draw = draw + 1;

        }

      }
      break;

    case '3':
        printf("\nRounds You Want to Play:  ");
    scanf("%d", &n);


    while(r<n)
        {
        printf("\n\nSelect Your Option: \n");
        printf("1) Rock \n");
        printf("2) Paper \n");
        printf("3) Scissor \n");
        printf("Option: ");
        scanf("%d", &player_turn);

        pc_turn = (rand() % 3) + 1;
        r = r + 1;  //rounds determine

        if (pc_turn == ROCK)
            printf("Computer Throws ROCK! \n");
        else if(pc_turn == PAPER)
            printf("Computer Throws PAPER! \n");
        else if(pc_turn == SCISSORS)
            printf("Computer Throws SCISSORS! \n");



        if (player_turn == ROCK && pc_turn == SCISSORS)
        {
            printf("Rock Beats Scissors! %s Won! :D \n", name);
            win = win + 1;

        }
        else if(player_turn == ROCK && pc_turn == PAPER)
        {
            printf("Paper Beats Rock! %s Lost! \n", name);
            lose = lose + 1;

        }
        else if(player_turn == SCISSORS && pc_turn == PAPER)
        {
            printf("Scissors Beats Paper! %s Won! :D \n", name);
            win = win + 1;

        }
        else if(player_turn == SCISSORS && pc_turn == ROCK)
        {
            printf("Rock Beats Scissors! %s Lost! \n", name);
            lose = lose + 1;

        }
        else if(player_turn == PAPER && pc_turn == ROCK)
        {
            printf("Paper Beats Rock! %s Won! :D \n", name);
            win = win + 1;

        }
        else if(player_turn == PAPER && pc_turn == SCISSORS)
        {
            printf("Scissors Beats Paper! %s Lost! \n", name);
            lose = lose + 1;

        }
        else
        {
            printf("\nDraw! Play Again!");

        }

      }


    }





         printf("\n\n\n\n-------------------------------");
         printf("\n");
         printf("\nFinal Stats of Current Session: ");
         printf("\n");
         printf("\nTotal Rounds Played: %d", n);
         printf("\nRounds Won = %d", win);
         printf("\nRounds Lost = %d", lose);
         printf("\nRounds Draw = %d", (n-win)-lose);
         printf("\n");
         printf("\n-------------------------------");





         printf("\n\n\n\n\n");
         system("pause");
}
