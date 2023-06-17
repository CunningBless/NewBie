#include<iostream>
#include<ctime>
using namespace std;

//Шаблон функций

/*template <typename T, typename T1>
T sum(T a, T1 b)
{
	return a + b;
}

void main()
{
	setlocale(LC_ALL, "rus");

	cout << sum(4.5, 5) << endl;
}*/

// Рекурсия расчет факториала. Факториал расчитывает как  N! = N * (N - 1)!

int Fuct(int N)
{
	if (N==0)
	{
		return 0;
	}
	if(N==1)
	{
		return 1;
	}

	return N * Fuct(N - 1);
}

void main()
{
	setlocale(LC_ALL, "Rus");

	cout << Fuct(12) << endl;

}

