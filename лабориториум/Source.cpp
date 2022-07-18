#include <iostream>
using namespace std;

#define tab "\t"
#define razdel "---------------------------------"

void main()
{
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << razdel << endl;

	for (int i = 0; i < ROWS; i++)
	{
         
		for (int j = 0; j < COLS; j++)
		{
			int buffer;
            if(i = 0 && j=0) buffer = arr[0][0];
			arr[i][j] = arr[i][j + 1];
			if (j == COLS - 1 && i != ROWS - 1)arr[i][j] = arr[i + 1][(j + 1) - COLS];
			else arr[ROWS - 1][COLS - 1] = buffer;
			
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}