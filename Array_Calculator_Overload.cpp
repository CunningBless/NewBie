#include <iostream>
#include <ctime>
using namespace std;

int prod(int a, int b)
{
	int result = a * b;
	return result;
	//èëè ïğîñòî return a * b;
}
void output(int r)
{
	cout << "Êîëè÷åñòâî ÷èñåë â ìàññèâå = " << r << endl;
	return;
}

//ÏÅĞÅÃĞÓÇÊÀ
int Sum(int a, int b)
{
	return a + b;
}

int Sum(int a, int b, int c)
{
	return a + b + c;
}

double Sum(double a, double b)
{
	return a + b;
}

void main()
{
	setlocale(LC_ALL, "rus");
	//srand(time(NULL));

	//ÄÂÓÌÅĞÍÛÉ ÌÀÑÑÈÂ
	/*const int ROWS = 5;
	const int COLS = 8;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	int c;
	c = prod(ROWS, COLS);
	output(c);*/

	//ÊÀËÜÊÓËßÒÎĞ
	/*cout << "Êàëüêóëÿòîğ" << endl;
	int a;
	int b;
	cin >> a;
	char c = '+' && '-' && '*' && '/';
	cin >> c;
	switch (c)
	{
	case '+':
		cin >> b;
		cout << a + b << endl;
		break;
	case '-':
		cin >> b;
		cout << a - b << endl;
		break;
	case '*':
		cin >> b;
		cout << a * b << endl;
		break;
	case '/':
		cin >> b;
		cout << a / b << endl;
		break;
	default:
		cout << "Âû ââåëè íåäîïóñòèìóş îïåğàöèÿ!" << endl;
		break;
	}*/

	//ÏÅĞÅÃĞÓÇÊÀ
	cout << (double)Sum(5,9,7) << endl;
}