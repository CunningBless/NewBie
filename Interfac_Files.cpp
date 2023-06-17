#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// РОМОБОВИДНОЕ И ВИРТУАЛЬНОЕ НАСЛЕДОВАНИЕ

/*class Component
{
public:
	Component(string companyName)
	{
		cout << "Constructure of the Component" << endl;
		this->companyName = companyName;
	}
	string companyName;
};

class GPU : public Component
{
public:
	GPU(string companyName) : Component(companyName)
	{
		cout << "Constructure of the GPU" << endl;
	}
};

class Memory : public Component
{
public:
	Memory(string companyName) : Component(companyName)
	{
		cout << "Constructure of the Memory" << endl;
	}
};

class GraphicCard : public GPU, public Memory
{
public:
	GraphicCard(string GPUcompanyName, string MemorycompanyName) :GPU(GPUcompanyName), Memory(MemorycompanyName)
	{
		cout << "Constructure of the GraphicCard" << endl;
	}
};
//////// В ситуации выше конструктор вызывается по правилу, поэтому component - GPU - component - Memory - GraphicCard
/////// чтобы этого избежать(Повторения и нахлёста данных) надо сделать виртуальное наследование, то есть вставить в модификаторах
/////// наследования Virtual

class Component
{
public:
	Component(string companyName)
	{
		cout << "Constructure of the Component" << endl;
		this->companyName = companyName;
	}
	string companyName;
};

class GPU : public virtual Component
{
public:
	GPU(string companyName) : Component(companyName)
	{
		cout << "Constructure of the GPU" << endl;
	}
};

class Memory : public virtual Component
{
public:
	Memory(string companyName) : Component(companyName)
	{
		cout << "Constructure of the Memory" << endl;
	}
};

class GraphicCard : public GPU, public Memory
{
public:
	GraphicCard(string GPUcompanyName, string MemorycompanyName) :GPU(GPUcompanyName), Memory(MemorycompanyName)
	{
		cout << "Constructure of the GraphicCard" << endl;
	}
};*/

// СОХРАНЕНИЕ ДАННЫХ В ФАЙЛ
											/////OFSTREAM
int main()
{
	setlocale(LC_ALL, "Rus");

	string path = "Myfile.txt";
	//cin >> path;
	ofstream fout;

	fout.open(path,ofstream::app);

	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << endl << "Введите число: " << endl;
		int a;
		cin >> a;
		fout << endl << "\t" << endl;
		fout << a;
		fout << endl << "\t" << endl;
	}
	
	fout.close();

	return 0;
}