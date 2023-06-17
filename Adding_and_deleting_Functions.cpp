#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void FillArray(int* const arr, const int size)
{
	for ( int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}
void ShowArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

//Добавление последнего элемента из массива
void push_back(int*& arr, int& size, const int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];		
	}
	newArray[size++] = value;

	delete[] arr;
	arr = newArray;
}

//Вычитание последнего элемента из массива
void pop_back(int*& arr, int& size)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}

	delete[] arr;
	arr = newArray;
}

//Добавление элемента по индексу
void push(int*& arr, int& size, const int index, int Value)
{
	if (index > size + 1)
	{
		cout << "Размер массива указан неверно. Количество элементов в массиве = " << size + 1 << endl;
		delete[] arr;
	}
	
	if (index <= size)
	{
		size++;
		int* newArray = new int[size];
		for (int i = 0; i < size; i++)
		{
			if (i >= index)
			{
				newArray[i + 1] = arr[i];
			}
			else
			{
				newArray[i] = arr[i];
			}
		}
		newArray[index] = Value;

		delete[] arr;
		arr = newArray;
	}
}

//Вычитание элемента по индексу
void pop(int*& arr, int& size, const int index = -1)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		if (i >= index)
		{
			newArray[i] = arr[i + 1];
		}
		newArray[i] = arr[i];
	}
	delete[] arr;
	arr = newArray;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	int size = 5;
	int* arr = new int[size];

	FillArray(arr, size);
	ShowArray(arr, size);

	push_back(arr, size, 111);
	ShowArray(arr, size);

	pop_back(arr, size);
	ShowArray(arr, size);

	int index;
	int Simbol;
	cout << "Введите индекс массива в который хотите добавить новый элемент" << endl;
	cin >> index;
	cout << "Введите значение, которое хотите подставить в выбранный элемент массива" << endl;
	cin >> Simbol;
	push(arr, size, index, Simbol);
	ShowArray(arr, size);

	cout << "Введите индекс массива, элемент которого хотите удалить" << endl;
	cin >> index;
	pop(arr, size, index);
	ShowArray(arr, size);

	delete[] arr;
}