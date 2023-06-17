#include <iostream>
#include<string>
using namespace std;

//Fun - моя ручная реализация strlen


int fun(char* str)
{
	int n = 0;
	
	while (str[n] != '\0')
	{
		n++;
	}

	return n;
	
}

void main()
{
	char str[] = "Hello" ;

	cout << fun(str) << endl;

}