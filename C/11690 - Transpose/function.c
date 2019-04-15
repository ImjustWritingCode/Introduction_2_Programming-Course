#include<stdio.h>
#include"function.h"
void Transpose (int* row, int* col, int matrix[][500])
{
	int sw[*row][*col];
	int i, j;
	for (i = 0;i < *row;i++)
		for (j = 0;j < *col;j++) sw[i][j] = matrix[i][j];
	for(i = 0;i < *row;i++)
		for (j = 0;j < *col;j++) matrix[j][i] = sw[i][j];
	i = *row;
	*row = *col;
	*col = i;
}