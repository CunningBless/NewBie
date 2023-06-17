#include <iostream>
#include <string>
using namespace std;

////////////////////////////////////////////////////////////

class Human
{
public:
	Human();
	~Human();
	string name;

private:

};

Human::Human()
{
}

Human::~Human()
{
}

////////////////////////////////////////////////////////////

class Student : public Human
{
public:
	Student();
	~Student();
	string group;
	void Learn()
	{
		cout << "I'm learning!" << endl;
	}
private:

};

Student::Student()
{
}

Student::~Student()
{
}

////////////////////////////////////////////////////////////

class ExtramuralStudent : public Student
{
public:
	ExtramuralStudent();
	~ExtramuralStudent();
	void Learn()
	{
		cout << "I'm visits lessons less then usual students" << endl;
	}
private:

};

ExtramuralStudent::ExtramuralStudent()
{
}

ExtramuralStudent::~ExtramuralStudent()
{
}

////////////////////////////////////////////////////////////

class Professor : public Human
{
public:
	Professor();
	~Professor();
	string subject;

private:

};

Professor::Professor()
{
}

Professor::~Professor()
{
}

////////////////////////////////////////////////////////////



int main()
{
	setlocale(LC_ALL, "rus");

	Student st;
	
	Professor pr;
	
	ExtramuralStudent exst;

	return 0;
}