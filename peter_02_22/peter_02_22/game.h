#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Mine_count 10
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void Find_Mine(char board1[ROWS][COLS],char board2[ROWS][COLS],int row,int col);
