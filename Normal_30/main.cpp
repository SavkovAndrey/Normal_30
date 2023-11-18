#include <iostream>
#include <time.h>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	int row, col;

	cout << "Enter ROWS: ";
	cin >> row;
	cout << "Enter the COLUMNS: ";
	cin >> col;

	int** arr = new int* [row];

	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}

	//------------------------------- генерация

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -5 + rand() % 16;
		}
	}

	//--------------------------------- вывод

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
		cout <<	arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//------------------------------- суммирование
	
	int sum = 0;
	bool sign = true;

	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row; i++)
		{
			if (arr[i][j] < 0)
			{
				sign = false;
			}
			sum += arr[i][j];
		}
		if (sign)
		{
			cout << sum << "\t";
		}
		else
		{
			cout << "-" << "\t";
		}
		sign = true;
		sum = 0;
	}

	cout << endl << endl;

	system("pause");
	return 0;
}
