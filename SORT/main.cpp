#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//заполнение уникальными случайными числами
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	// вывод исходного массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	// cортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
					int buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
			}
		}
			
	}
	//вывод отсортированного массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}
