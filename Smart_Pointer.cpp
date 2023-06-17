#include <iostream>
#include <string>
#include<memory>

using namespace std;

////Pointers
template<typename T>
class SmartPointer
{
public:
	SmartPointer(T *ptr)
	{
		this->ptr = ptr;
		std::cout << "Constructor" << std::endl;
	}

	~SmartPointer()
	{
		delete ptr;
		std::cout << "Destructor" << std::endl;
	}

	T& operator*()
	{
		return *ptr;
	}

private:
	T* ptr;
};


int main()
{
	SmartPointer<int> pointer = new int(5);

	std::cout << *pointer << "\n";
	return 0;
}
