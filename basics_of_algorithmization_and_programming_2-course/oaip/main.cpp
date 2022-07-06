#include <iostream>

using namespace std;

class triangle
{
public:
	triangle(int x, int o, int y)
	{
		cout << "Вывод значения x: " << x << endl;
		cout << "Вывод значения o: " << o << endl;
		cout << "Вывод значения y: " << y << endl;
	}
	triangle(const triangle& obj)
	{
		cout << "Конструктор копирования" << endl;
	}
	~triangle() {}

};

class point
{
public:
	point(int x, int y)
	{
		
	}
};


int main()
{
	int p;
	cout << "Enter number: ";
	cin >> p;
	switch (p) {
	case 1: {
		cout << "xd" << endl;
	}
	case 2: {

	}
	default: {
		cout << "Неверный номер" << endl;
		break;
	}
	}
	return 0;
}