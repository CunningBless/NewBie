#include <iostream>
#include<string>
#include <ctime>
using namespace std;

//   ID - generator without check

class Apple
{
public:
	static int count;
	Apple(int weight, string color);
	Apple();
	~Apple();

	int GetID()
	{
		return ID;
	}

private:
	int ID;
	int weight;
	string color;
};

Apple::Apple()
{
}

Apple::Apple(int weight, string color)
{
	this->weight = weight;
	this->color = color;
	int count = rand() % 999999 + 100000;
	ID = count;
};

Apple::~Apple()
{
}

int main()
{
	setlocale(LC_ALL, "Rus");

	Apple apple(150, "Green");
	Apple apple2(150, "Green");
	Apple apple3(150, "Green");

	cout << apple.GetID() << endl;
	cout << apple2.GetID() << endl;
	cout << apple3.GetID() << endl;

	return 0;
}

				// OOP

//Getter and Setter
/*class GetteSetter
{
public:
	GetteSetter();
	~GetteSetter();

	int GetA()
	{
		return a;
	}
	
	void SetA(int valueA)
	{
		a = valueA;
	}

	void Print()
	{
		cout << "a = " << a << "\t b = " << b << endl;
	}

private:
	int a;
	int b;
};

GetteSetter::GetteSetter()
{
}

GetteSetter::~GetteSetter()
{
}

int main()
{
	GetteSetter x;
	x.SetA(11);
	x.Print();
	return 0;
}*/

//CopyConstructor
/*class CopyConstructor

{
public:
	int *data;

	CopyConstructor(int size);
	CopyConstructor(const CopyConstructor &other);
	~CopyConstructor();

private:
	int Size;
};

CopyConstructor::CopyConstructor(int size)
{
	this->Size = size;
	this->data = new int [size];
	for (int i = 0; i < size; i++)
	{
		data[i] = i;
	}
	cout << "Вызвался конструктор " << this << endl;
}

CopyConstructor::CopyConstructor(const CopyConstructor& other)
{
	this->Size = other.Size;

	this->data = new int[other.Size];

	for (int i = 0; i < other.Size; i++)
	{
		this->data[i] = other.data[i];
	}
	cout << "Вызвался конструктор " << this << endl;
}

CopyConstructor::~CopyConstructor()
{
	cout << "Вызвался деконструктор " << this << endl;
	delete[] data;
}

void Foo(CopyConstructor value)
{
	cout << "Вызвалась функция FOO" << endl;
}

CopyConstructor Foo2()
{
	cout << "Вызвалась функция FOO_2" << endl;
	CopyConstructor temp(2);
	return temp;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	CopyConstructor a(10);
	CopyConstructor b(a);

	//Foo2();

	return 0;
}*/

