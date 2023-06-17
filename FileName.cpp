#include <iostream>
#include <string>
using namespace std;

//INNER CLASSES
/*class image
{
public:

	void GetImageInfo()
	{
		for (int i = 0; i < LENGHT; i++)
		{
			cout << pixels[i].GetInfo() << endl;;
		}
	}
	image();
	~image();
	
private:
	class Pixel
	{
	public:
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}

		string GetInfo()
		{
			return "Pixel: r = " + to_string(r) + "\tPixel: g = " + to_string(g) + "\tPixel: b = " + to_string(b);
		}
	private:
		int r;
		int g;
		int b;
		friend image;
	};
	

	static const int LENGHT = 5;

	Pixel pixels[5]
	{
		Pixel(0,4,64),
		Pixel(9,18,20),
		Pixel(111,4,24),
		Pixel(233,233,46),
		Pixel(111,179,64)
	};
};

image::image()
{
}

image::~image()
{
}

int main()
{
	setlocale(LC_ALL, "rus");

	image img;
	img.GetImageInfo();
}*/
//COMPOSITION
/*class Human
{
public:
	Human();
	~Human();
	void Think()
	{
		brain.think();
	}
private:
	class Brain
	{
	public:
		void think()
		{
			cout << "I'm thinking!" << endl;
		}
	private:

	};
	Brain brain;
};

Human::Human()
{
}

Human::~Human()
{
}

int main()
{
	Human human;
	human.Think();
}*/
//AGGRIGATION
class Cap
{
public:
	Cap();
	~Cap();
	string GetColor()
	{
		return color;
	}
private:
	string color = "Red";
};

Cap::Cap()
{
}

Cap::~Cap()
{
}

class Human
{
public:
	Human();
	~Human();
	void Think()
	{
		brain.think();
	}

	void InspectTheCap()
	{
		cout << "My cap have " << cap.GetColor() << " color." << endl;
	}

private:
	class Brain
	{
	public:
		void think()
		{
			cout << "I'm thinking!" << endl;
		}

	private:

	};
	Brain brain;
	Cap cap;
};

Human::Human()
{
}

Human::~Human()
{
}

int main()
{
	Human human;
	human.Think();
	human.InspectTheCap();
}