//TIC TAC TOE GAME 
//JOURNEY TO RELEAN C & NOT HATE IT!
//7/22/2024 - MARGO BONAL

/********LIBRARIES******/
#include <stdio.h>
#include "t.h"
/***********************/

//BEGIN MAIN
int main(void)
{
    char board[SIZE][SIZE];
    initBoard(board);

    char currPlayer = 'X';
    int gameStat;

    while(1)
    {
        prn_board(board);
        playerMove(board, currPlayer);
        gameStat = checkWin(board);

        if(gameStat == 1)
        {
            prn_board(board);
            printf("Player %c wins!!\n", currPlayer);
            break;
        }else if(gameStat == 2){
            prn_board(board);
            printf("It's a Draw!");
            break;
        }
        //switch players
        currPlayer =(currPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}//end main
