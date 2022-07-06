#include <iostream>
#include <ctime>
using namespace std;

#define tab "\t"
//#define unique1

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//заполнение уникальными случайными числами
#ifdef unique1
	for (int i = 0; i < n; i++)
	{
		bool unique; // в этой переменной будем запоминать уникальность
		do
		{
			arr[i] = rand() % n;
			unique = true; // ПРЕДпОЛОГАЕМ что сгенерировалось уникальное случайное число
			for (int j = 0; j < i; j++)// но это нужно перебрать
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
#endif // unique1
	cout << time(NULL);
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}

	//вывод массива на экран

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}