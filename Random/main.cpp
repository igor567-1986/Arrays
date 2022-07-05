#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//заполнение массива случайными числами
	int minRand, maxRand;
	do
	{
		cout << "¬ведите минимальное случайное число:"; cin >> minRand;
		cout << "¬ведите максимальное случайное число:"; cin >> maxRand;
		if (minRand >= maxRand)cout << "Error: значение некорректны , попробуйте еще раз."<< endl;
	} while (minRand >= maxRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}