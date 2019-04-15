#include <iostream>
#include "function.h"
using namespace std;

Matrix::Matrix()
{
	for (int i = 0;i < 50;i++)
		for (int j = 0;j < 50;j++) matrix[i][j] = 0;
	matrix_size = -1;
}

Matrix::Matrix(const int size, const int m[50][50])
{
	matrix_size = size;
	for (int i = 0;i < size;i++) 
		for (int j = 0;j < size;j++) matrix[i][j] = m[i][j];
}

Matrix Matrix::row(const int r1, const int r2) const
{
	Matrix ret;
	ret.matrix_size = matrix_size;
	int s;
	for (int i = 0;i < matrix_size;i++) {
		for (int j = 0;j < matrix_size;j++) {
			if (i == r1) ret.matrix[i][j] = matrix[r2][j];
			else if (i == r2) ret.matrix[i][j] = matrix[r1][j];
			else ret.matrix[i][j] = matrix[i][j];
		}
	}
	return ret;
}

Matrix Matrix::rotate90(void) const
{
	Matrix ret;
	ret.matrix_size = matrix_size; 
	for (int i = 0;i < matrix_size;i++)
		for (int j = 0;j < matrix_size;j++)
			ret.matrix[i][j] = matrix[matrix_size-1-j][i];
	return ret;
}

Matrix Matrix::rotatecounter90(void) const
{
	Matrix ret;
	ret.matrix_size = matrix_size;
	for (int i = 0;i < matrix_size;i++)
		for (int j = 0;j < matrix_size;j++)
			ret.matrix[i][j] = matrix[j][matrix_size-1-i];
	return ret;
}

void Matrix::symmetric() const
{
	bool flag = true;
	for (int i = 0;i < matrix_size;i++)
		for (int j = 0;j < i;j++)
			if (matrix[i][j] != matrix[j][i]) flag = false;
	if (flag) cout << "yes" << endl;
	else cout << "no" << endl;
}

void Matrix::output(void) const
{ 
	for (int i = 0;i < matrix_size;i++) {
		cout << matrix[i][0];
		for (int j = 1;j < matrix_size;j++) cout << " " << matrix[i][j];
		cout << endl;
	}
}