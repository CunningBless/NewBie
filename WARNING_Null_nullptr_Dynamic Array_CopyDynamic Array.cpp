#include <iostream>
#include <ctime>
#include <ctime>
using namespace std;

//NULL, nullptr, WARNING

/*void main()
{
	setlocale(LC_ALL, "Rus");
	int a = 5;
	int *pa = new int;
	cout << "a = " << a << endl << "pa = " << pa << endl;
	*pa = 10;
	cout << "pa = " << *pa << endl;
	delete pa;
	pa = NULL;										//����� nullptr
	cout << "pa = " << pa << endl;


	//delete pa - ���� delete ������ NULL � �� ����� �������, ��� ��� ���������(= 0) ��� �������� � ������� NULL.
	//��� NULL,  delete �� ����� ������.

	//nullptr - ��� ��������� ��� ������, ������� ��������� �� 0 (������� ������������� (int)).

	//�����, ������� delete, � ����� nullptr, � �������� ������� ����� ������ ������! ��� ���, delete ������ ������ � CPU, � nullptr
	//��� NULL ������ ��������� � ���� ���������, �� �� �� ����� ���������, � ������ ���������� �� �����������!!!
}*/

//Dynamic Array and how to copy dynamic array

/*
void Fillarr(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}

void Showarr(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	int size = 10;

	int* FirstArray = new int[size];
	int* SecondArray = new int[size];

	Fillarr(FirstArray, size);
	Fillarr(SecondArray, size);

	cout << "FirstArray =\t";
	Showarr(FirstArray, size);
	cout << "SecondArray =\t";
	Showarr(SecondArray, size);

	delete[] FirstArray;
	FirstArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		FirstArray[i] = SecondArray[i];
	}

	cout << "FirstArray =\t";
	Showarr(FirstArray, size);
	cout << "SecondArray =\t";
	Showarr(SecondArray, size);


	delete[] FirstArray;
	delete[] SecondArray;

	FirstArray = nullptr;
	SecondArray = nullptr;

	cout << "FirstArray =\t";
	Showarr(FirstArray, size);
	cout << "SecondArray =\t";
	Showarr(SecondArray, size);
}*/