#ifndef T_H
#define T_H

/*******CONSTANTS***********/
#define SIZE 3
/*******END CONSTANTS******/

/***********PROTOTYPES*****************/
void prn_board(char board[SIZE][SIZE]);
void initBoard(char board[SIZE][SIZE]);
int checkWin(char board[SIZE][SIZE]);
void playerMove(char board[SIZE][SIZE], char player);
/***********END PROTOTYPES*************/

#endif