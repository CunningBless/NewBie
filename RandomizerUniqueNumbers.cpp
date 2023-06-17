#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];

	bool check;

	for (int i = 0; i < SIZE; )
	{
		check = false;
		int NewValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == NewValue)
			{
				check = true;
				break;
			}
		}

		if (!check)
		{
			arr[i] = NewValue;
			i++;
		}

	}	

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	int min = arr[0];

	for (int i = 1; i < SIZE; i++)
	{

		if (arr[i] < min)
		{
			min = arr[i];
		}

	}
	cout << "Минимальное число из рандомных = " << min << endl;
}