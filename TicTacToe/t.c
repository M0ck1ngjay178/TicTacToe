/********LIBRARIES******/
#include <stdio.h>
#include "t.h"
/***********************/


/*********FUNCTION BODIES************/

void prn_board(char board[SIZE][SIZE])
{
    printf("\n");

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j <SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if(j<SIZE -1) printf("|");
        }
        printf("\n");
        if(i<SIZE-1) printf("---|---|---\n");
    }
    printf("\n");
}
//-------------------------------------------
void initBoard(char board[SIZE][SIZE])
{
    int num = '1';
    for(int i =0; i < SIZE; i++)
    {
        for(int j = 0; j <SIZE; j++)
        {
            board[i][j] = num ++;
        }
    }
}
//-------------------------------------------

int checkWin(char board[SIZE][SIZE])
{
    //check rows and cols
    for(int i =0; i<SIZE; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }
    //check diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
            return 1;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    //check for drawing
    int draw = 1;
    for(int i = 0; i <SIZE; i++)
    {
        for(int j = 0; j<SIZE; j++)
        {
            if(board[i][j] != 'X' && board[i][j] != 'O')
            {
                draw = 0;
                break;
            }
        }
    }
    if(draw) return 2;

    return 0;
}
//-------------------------------------------------------------
 void playerMove(char board[SIZE][SIZE], char player)
 {
    int move;
    while(1)
    {
        printf("Player %c, enter your move (1-9): ", player);
        scanf("%d", &move);

        if(move <1 || move > 9)
        {
            printf("Invalid move! Try again.\n");
            continue;
        }

        int row =(move -1)/SIZE;
        int col =(move -1)%SIZE;

        if(board[row][col] != 'X' && (board[row][col] != 'O'))
        {
            board[row][col] = player;
            break;
        }else{
            printf("Spot already taken! Try again.\n");
        }

    }
 }


/*********END FUNCTION BODIES**********/