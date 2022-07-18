#include <iostream>
#include <Windows.h>
using namespace std;

#define tab "\t"
#define SHIFT_LEFT_RIGHT
//#define UNIQUE_RANDOM1
//#define povtor

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
#ifdef SHIFT_LEFT_RIGHT
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	int shifts, buffer;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "Введите количество сдвигов :"; cin >> shifts;
	for (int i = 0; i < shifts; i++)
	{
		buffer = arr[9];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		cout << endl;
		//system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
		//Sleep(1000);
	}
#endif // SHIFT_LEFT_RIGHT

#ifdef UNIQUE_RANDOM1
	int arr[n];
	//заполнение массива случайными числами
	int minRand, maxRand;
	do
	{
		cout << "Введите минимальное случайное число:"; cin >> minRand;
		cout << "Введите максимальное случайное число:"; cin >> maxRand;
		if (minRand >= maxRand)cout << "Error: значение некорректны , попробуйте еще раз." << endl;
	} while (minRand >= maxRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // UNIQUE_RANDOM1
#ifdef povtor
	cout << "Нахождение повторяющихся элементов массива." << endl;
	int  arr[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

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

	int counter = 0, a = n + 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				if (arr[i] == a)break;
				counter++;
			}
		}
		if (counter == 1) cout << arr[i] << " повторяется в массиве " << counter << "раз" << endl;
		if (counter > 3)
		{
			cout << arr[i] << " повторяется в массиве " << counter << "раза" << endl;
			a = arr[i];
		}
		counter = 1;
	}

#endif // DEBUG

}