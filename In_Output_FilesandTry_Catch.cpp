#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <filesystem>
using namespace std;

//Работа с файлами - ввод и вывод. 

/*class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void Print()
	{
		cout << "x = " << x << "y = " << y << "z = " << z << endl;
	}
	int x, y, z;
};

ostream& operator<<(ostream& os, const Point& point)
{
	os << point.x << " " << point.y << " " << point.z << " ";

	return os;
}
istream& operator>>(istream& is, Point& point)
{
	is >> point.x >> point.y >> point.z;

	return is; 
}

int main()
{
	setlocale(LC_ALL, "Rus");
	string path = "Myfile.txt";

	//Point point(287, 682, 989);
	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);

	//cout << point;

	if (!fs.is_open())
	{
		cout << "Ошибка открытия файлв!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		//fs << point << endl;
		while (!fs.eof())
		{
			Point p;
			fs >> p;
			if (fs.eof())
			{
				break;
			}
			cout << p << endl;
		}
	}
	fs.close();
	return 0;
}*/

//THROW and some blocks of the catch

/*void foo(int value)
{
	if (value < 0) 
	{
		throw "The value is less than 0!";		//throw exception("The value is less than 0!");
	}
	if (value == 0) 
	{
		throw exception("The value equally 0!");
	}
	if (value == 1)
	{
		throw 1;
	}
	cout << "Переменная = " << value << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	
	try
	{
		foo(1);
	}
	catch (exception &ex)																//(const char* ex)
	{
		cout << "First block: Cough the exception - " << ex.what() << endl;
	}
	catch (const char* ex)
	{
		cout << "Second block: Cough the exception - " << ex << endl;
	}
	catch (...)																//These catch with three points (...) is endless catch
	{
		cout << "Something wrong!" << endl;
	}

	return 0;
}*/

// My exception

class MyException :public exception
{
public:
	MyException(const char* msg,int DataState):exception(msg)
	{
		this->DataState = DataState;
	}
	int GetDataState()
	{
		return DataState;
	}
private:
	int DataState;
};

void foo(int value) 
{
	if (value < 0)
	{
		throw exception("The value less then 0!");
	}
	if (value == 1)
	{
		throw MyException("The value is 1!", value);
	}

	cout << "Valuable = " << value << endl;
}

int main()
{
	try
	{
		foo(1);
	}
	catch (MyException& ex)
	{
		cout << "Second block: Cough the exception - " << ex.what() << endl;
		cout << "Condition of the dates - " << ex.GetDataState() << endl;
	}
	catch (exception& ex)
	{
		cout << "First block: Cough the exception - " << ex.what() << endl;
	}
	cout << sizeof(public) << endl;
	return 0;
}