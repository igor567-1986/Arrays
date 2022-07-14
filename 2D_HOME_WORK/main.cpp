#include <iostream>
using namespace std;

#define tab "\t"
#define delimetr "\n------------------------------\n\n"
//#define SORT_2D
int main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 5;
	const int COLS = 5;
	int A[ROWS][COLS];

	//srand(time(NULL));
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 25;
		}
	}
	

#ifdef SORT_2D
	//выводим матрицу на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimetr;
	//сортировка массива
	for (int i = 0; i < ROWS * COLS; i++)
	{
		int buffer;
		for (int j = 0; j < ROWS; j++)
		{
			for (int l = 0; l < COLS - 1; l++)
			{
				if (A[j][l + 1] > A[j][l])
				{
					buffer = A[j][l];
					A[j][l] = A[j][l + 1];
					A[j][l + 1] = buffer;
				}
			}
		}
		for (int k = 0; k < COLS; k++)
		{
			for (int m = 0; m < ROWS - 1; m++)
			{
				if (A[m][k + 1] > A[m][k])
				{
					buffer = A[m][k];
					A[m][k] = A[m][k + 1];
					A[m][k + 1] = buffer;
				}
			}
		}


	}
#endif // SORT_2D

	int m, k,n,b;
	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			for (int l = 0; l < COLS; l++)
			{

				for (k = j; k < ROWS; k++)
				{
					for (m = l + 1; m < COLS; m++)
					{
						if (A[j][l] == A[k][m])
						{
							A[k][m] = rand() % 25;
							m--;
						}
					}
				}
				for (n = l; n < COLS; n++)
				{
					for (b = j + 1; b < ROWS; b++)
						if (A[j][l] == A[b][n])
						{
							A[b][n] = rand() % 25;
							b--;
						}
				}
			}
		}
	}
			// вывод  массива
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	return 0;
}