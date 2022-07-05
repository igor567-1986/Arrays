#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int a,b, c;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)cout << A[i][j] << tab;
		cout << endl;
	}
	
	a = A[0][0] * A[1][1] * A[2][2];
	b = A[0][0] * A[1][2] * A[2][1];
	for (int i = 0; i < 1; i++)
	{	
		for (int j = 0; j < COLS; j++)
		{
			if (j == i) continue;
			int k = 3 - i - j;
			a += A[i][j] * A[j][k] * A[k][i];
			b += A[i][k] * A[j][j] * A[k][i];
		}
	}
	c = (a - b);
	cout <<"Определитель матрицы третьего порядка="<< c<<endl;
	
	
}