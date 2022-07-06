#include <iostream>
#include <Windows.h>
using namespace std;
//#define HOME_WORK

void main()
{
	setlocale(LC_ALL, "");
	cout << "Сдвиг массива состаяшего из десятя посдедовательных цифр."<<endl;
	const int n = 10;
	int arr[n]={1,2,3,4,5,6,7,8,9,10};
#ifdef HOME_WORK
	int value, t, max, min;
	cout << "Введите с какой цифры начнется массив :"; cin >> value;
	for (int i = 0; i < n; i++)
	{
		arr[i] = value++;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
	max = arr[9];
	min = arr[0];
	int shift;
	cout << "Введите на сколько надо сдвинуть массив:"; cin >> shift;
	t = shift;
	for (int i = 0; i < n - t; i++)
	{
		arr[i] = min + shift; shift++;
	}
	for (int i = n - t; i < n; i++)
	{
		arr[i] = min; ++min;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
#endif HOME_WORK

	int value,shifts;
	//cout << "Введите элементы массива:"; cin >> value;
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
	//сдвиг массива
	cout << "Введите количество сдвигов :"; cin >> shifts;
	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
			cout << arr[i] << "\t";
		cout << endl;
		Sleep (1000);
	}
}