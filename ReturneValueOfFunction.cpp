#include <iostream>
#include <ctime>
using namespace std;

//POINTER

//void fun(int *pa, int *pb)
//{
//	int c = (*pa);
//	int d = (*pb);
//	(*pb) = c;
//	(*pa) = d;
//
//	/*int c = (*pa);
//	*pa = *pb;
//	*pb = c;
//	Также можно без p(pointer) - просто переменную вписать *a или *b*/
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	int a, b;
//	cin >> a >> b;
//
//	cout << "a = " << a << endl << "b = " << b << endl;
//
//	fun(&a, &b);
//
//	cout << "a = " << a << endl << "b = " << b << endl;
//}

//LINK

template <typename T>
void fun(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

void main()
{
	setlocale(LC_ALL, "Rus");

	double a = 5.58;
	double b = 10.5;

	cout << "a = " << a << endl << "b = " << b << endl;

	fun(a, b);

	cout << "a = " << a << endl << "b = " << b << endl;
}