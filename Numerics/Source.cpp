#include <iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_16_BIN


void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_2_BIN
	int decimal;//это десятичное число введеное пользователем
	cout << "Введите десятичное число:"; cin >> decimal;
	const int MAX_SIZE = 32;//int - 4 bytes = 32 bit
	bool bin[MAX_SIZE] = {}; //этот массив будет хранить разряд двоичного числа
	int i = 0;//счетчик разрядов
	while (decimal)
	{
		bin[i] = decimal % 2;//получаем младший разряд двоичного числа
		decimal /= 2;//убираем полученый разряд двоичного числа
		i++;
	}

	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0) cout << " ";
		if (i % 4 == 0) cout << " ";
	}
	cout << endl;
#endif // DEC_2_BIN

#ifdef DEC_16_BIN
	int decimal;
	cout << "Введите десятичное число:"; cin >> decimal;
	const int MAX_SIZE = 8;
	char hex[MAX_SIZE] = {};
	int i = 0;
	while (decimal)
	{
		hex[i] = decimal % 16;
		if (hex[i] == 1)  hex[i] = '1';
		else if (hex[i] == 2) hex[i] = '2';
		else if (hex[i] == 3) hex[i] = '3';
		else if (hex[i] == 4) hex[i] = '4';
		else if (hex[i] == 5) hex[i] = '5';
		else if (hex[i] == 6) hex[i] = '6';
		else if (hex[i] == 7) hex[i] = '7';
		else if (hex[i] == 8) hex[i] = '8';
		else if (hex[i] == 9) hex[i] = '9';
		else if (hex[i] == 10) hex[i] = 'A';
		else if (hex[i] == 11) hex[i] = 'B';
		else if (hex[i] == 12) hex[i] = 'C';
		else if (hex[i] == 13) hex[i] = 'D';
		else if (hex[i] == 14) hex[i] = 'E';
		else if (hex[i] == 15) hex[i] = 'F';
		decimal /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		cout << hex[i];

	}
	cout << endl;
#endif // DEC_16_BIN

}