#include <iostream>
#include <string>
using namespace std;

//������������ �������������

/////������������ ��� ��������� ������� �� ������ ������ ��� � ���������� ������� (� VIRTUAL - OVERRIDE)

////////////////////////////////       ������������ ������� ���������� ������������ ������� 
/*class Pen
{
public:
	Pen();
	void Write()
	{
		cout << "Write the text!" << endl;
	}

	string GetWritting()
	{
		return Writting;
	}

private:
	string Writting = "Writting";
};
Pen::Pen()
{

}

class Pencil
{
public:
	Pencil();

	void Drafting()
	{
		cout << "Drafting the figures!" << endl;
	}

	string GetDrafting()
	{
		return Draft;
	}

private:
	string Draft = "Drafting ";
};
Pencil::Pencil()
{

}


class PenPencil : public Pen, public Pencil
{
public:
	void painting()
	{
		cout <<"I'm " + GetDrafting() + "and " + GetWritting() << endl;
	}
};*/

//////////////////////////////// ������������ ������� �� ���������� ������������ ������� ������� ������� ��������� ����������
class Pen
{
public:
	Pen();
	void Use()
	{
		cout << "Write the text!" << endl;
	}

	string GetWritting()
	{
		return Writting;
	}

private:
	string Writting = "Writting";
};
Pen::Pen()
{

}

class Pencil
{
public:
	Pencil();

	void Use()
	{
		cout << "Drafting the figures!" << endl;
	}

	string GetDrafting()
	{
		return Draft;
	}

private:
	string Draft = "Drafting ";
};
Pencil::Pencil()
{

}


class PenPencil : public Pen, public Pencil
{
public:
	void painting()
	{
		cout << "I'm " + GetDrafting() + "and " + GetWritting() << endl;
	}
};



int main()
{
	setlocale(LC_ALL, "Rus");

	PenPencil PP;	

	/*PP.Drafting();			//��� � ������� ������������������ ����	!
	Pen* ref = &PP;            ////��������� ����� �� ������� ������ �� ������� �����. �� ���� ��� ��������. ��������. ����� �������
	PP.Write();                ////����� ������� ������!
	PP.painting();*/
							
	((Pen)PP).Use();//��� ����� ���������� �����(������ �� ���� � ������ ��Ш�), �� ���� ������ ��������� �� ������ ����� (���������������� ��� ������)
	((Pencil)PP).Use();//��� ��� ��������� ������ ����� ������� ������, �� ���� �� ��������


	return 0;
}