#include <iostream>
#include <string>
using namespace std;

template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();													///////!!!
	void push_back(T data);
	void clear();
	int GetSize() { return Size; }
	T& operator[](const int index);
	void push_front(T data);
	void insert(T value, int index);
	void removeAt(int index);
	void pop_back();													///////!!!




private:
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;

		Node(T data =T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T> *head;
};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;

		while (current->pNext !=nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	Size++;
}

template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;

	while (current != nullptr)
	{
		if(counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	Size++;
}

template<typename T>
void List<T>::insert(T value, int index)
{
	if (index == 0)
	{
		push_front(value);
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* newNode = new Node<T>(value, previous->pNext);
		previous->pNext = newNode;
		Size++;
	}
}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;
		Size--;
	}
}

template<typename T>
void List<T>::pop_back()
{
	removeAt(Size - 1);
}




int main()
{
	setlocale(LC_ALL, "Rus");

	List<int> lst;


	/*int NumbersCount;
	cin >> NumbersCount;
	for (int i = 0; i < NumbersCount; i++)
	{
		lst.push_back(rand() % 10);
	}*/

	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(22);

	/*cout << lst[2] << endl;

	cout << lst.GetSize() << endl;*/

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "Amount int the lis = " << lst.GetSize() << endl << "Deleting element " << endl << endl;
	lst.pop_front();

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "Amount int the lis = " << lst.GetSize() << endl;
	
	cout << endl <<  "Deleting elements " << endl << endl;
	lst.clear();
	cout << endl << "Amount int the lis = " << lst.GetSize() << endl;

	lst.push_front(11);
	lst.push_front(78);
	lst.push_front(89);

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "Insert" << endl;

	lst.insert(87, 1);

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	return 0;
}
