#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//ENUM

/*class PC
{
public:
	enum PCSTATE
	{
		OFF,
		ON,
		SLEEP
	};

	PCSTATE GetState() { return State; }
	void SetState(PCSTATE State)
	{
		this->State = State;
	}
private:
	PCSTATE State;
};


int main()
{
	PC pc;
	pc.SetState(PC::PCSTATE::ON);

	//if (pc.GetState() == PCSTATE::ON)
	//{
		//cout << "PC is switch on" << endl;
	//}
	
	switch (pc.GetState())
	{
	case PC::PCSTATE::OFF:
		cout << "Switched off" << endl;
		break;
	case PC::PCSTATE::ON:
		cout << "Switched on" << endl;
		break;
	case PC::PCSTATE::SLEEP:
		cout << "Is sleeping" << endl;
		break;
	}

	return 0;
}*/

//TypeSize

class Point
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
	
private:
	int x;
	int y;
	int z;
};

template<typename T>
class TypeSize
{
public:
	TypeSize(T value)
	{
		this->value = value;
	}
	void DataTypeSize()
	{
		cout << "value = " << sizeof(value) << endl;
	}
protected:
	T value;
};

template<typename T>
class TypeInfo:public TypeSize <T>
{
public:
	TypeInfo(T value) : TypeSize<T>(value)
	{
		
	}
	void ShowTypeName()
	{
		cout << "The name of the type: " << typeid(this->value).name() << endl;
	}
};

int main()
{
	Point a;

	TypeInfo<Point> c(a);

	c.ShowTypeName();
	c.DataTypeSize();

	return 0;
}

