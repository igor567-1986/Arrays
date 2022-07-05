 #include <iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n]={ 3, 5, 8 ,13, 28};
	//ввод массива с клавиатуры
	cout << "Введите значение элемента массива:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];//обращаемся к элементу массива на запись
	}

	// вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab; //обращаемся к элементу массива на вывод
	}
	cout << endl;
	// вывод  массива на экран в обратном порядке
	// от последнего до нулевого:
	for (int i=n-1 ;i>=0;i--)
	{
		cout << arr[i] << tab; 
	}
	cout << endl;
	//вычисление суммы элементов массива
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива:" << sum << endl;
	cout << "Среднее арифметическое эллементов массива:" << (double)sum / n << endl;

	// Поиск минимального и максимального значения:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве:" << min << endl;
	cout << "Максимальное значение в массиве:" << max << endl;
}