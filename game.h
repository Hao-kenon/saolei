#define ROW 3
#define COL 3

#define ROWS ROW+2
#define COLS COL+2

#define EAS_COUNT 3

#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

void InitBoard(char[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col); 
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);