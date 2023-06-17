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
	pa = NULL;										//лучше nullptr
	cout << "pa = " << pa << endl;


	//delete pa - этот delete увидет NULL и не будет чистить, так как обнуление(= 0) уже сделанно с помощью NULL.
	//Без NULL,  delete бы выдал ошибку.

	//nullptr - это отдельный тип данных, который принимает не 0 (который целочисленный (int)).

	//Также, сначала delete, а потом nullptr, в обратном порядке будет утечка памяти! Так как, delete чистит данные в CPU, а nullptr
	//или NULL чистит указатель и если ошибиться, то то мы сотрём указатель, а данные остануться не отчищенными!!!
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