#include <iostream>
using namespace std;

#define tab "\t"
#define delimetr "\n------------------------------\n\n"
#define SORT_2D
void main()
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
	//выводим матрицы на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimetr;
#ifdef SORT_2D
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


	// вывод отсортированого массива
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
}