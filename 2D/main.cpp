#include <iostream>
using namespace std;

#define tab "\t"
#define delimetr "\n--------------------\n"

//#define BASICS
// #define MATRIX_ADDITIONS

void main()
{
	setlocale(LC_ALL, "");
#ifdef BASICS
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS]
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif // BASICS

	// Matrix addition:
	
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int B[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	//выводим матрицы на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j]<< tab;
		}
		cout << endl;
	}
	cout << delimetr << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	//При сложении матриц А В мы получаем третью матрицу С,каждый элемент которой 
	//является суммой соответсвующих элементов слогаемых матриц.
	int C[ROWS][COLS]{};
#ifdef MATRIX_ADDITIONS
		for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
#endif MATRIX_ADDITIONS
	cout << delimetr << endl;

	//           Matrix multiplication:
	// При умножении матрицы А на матрицу В, мы получаем результирующую матрицу С.
	// для того чтобы получить один элемент матрицы С ,необходимо все элементы строки матрицы А
	// умножить на соответсвующие элементы столбца матрицы В, и полученые произведения сложить.
	
	if (ROWS != COLS)cout << "Умножение не возможно."<<endl;
	else
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = 0; k < ROWS; k++)
					C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}

}