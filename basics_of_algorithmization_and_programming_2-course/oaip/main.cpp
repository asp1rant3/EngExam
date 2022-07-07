#include <iostream>
#include<cmath>

using namespace std;
//////////////////////!!zadanie 1!! /////////////////////////////////////////
class point
{
	
public:
	int x;
	int y;

	point(int x, int y)
	{
		cout << "Вывод значения x точки: " << x << endl;
		cout << "Вывод значения y точки: " << y << endl;
	}
	point(const point& obj)
	{
		cout << "Конструктор копирования класса (Точка)" << endl;
	}
	~point() {}
};

class triangle
{
private:
	

public:
	int x_x;
	int x_y;

	int y_x;
	int y_y;

	int z_x;
	int z_y; 

	triangle(int x_x, int x_y, int y_x, int y_y, int z_x, int z_y)
	{
		cout << "Вывод значения x точки x: " << x_x << endl;
		cout << "Вывод значения y точки x: " << x_y << endl;
		cout<<endl;
		cout << "Вывод значения x точки y: " << y_x << endl;
		cout << "Вывод значения y точки y: " << y_y << endl;
		cout << endl;
		cout << "Вывод значения x точки z: " << z_x << endl;
		cout << "Вывод значения y точки z: " << z_y << endl;
		cout << endl;

	}
	triangle(const triangle& obj)
	{
		cout << "Конструктор копирования класса (Треугольник)" << endl;
	}
	~triangle() {}

};

 
void Proverka_Point(triangle A, point B)
{
	int z1, z2, z3;
	z1 = (A.x_x - B.x) * (A.y_y - A.x_y) - (A.y_x - A.x_x) * (A.x_y - B.y);
	z2 = (A.y_x - B.x) * (A.z_y - A.y_y) - (A.z_x - A.y_x) * (A.y_y - B.y);
	z3 = (A.y_x - B.x) * (A.x_y - A.z_y) - (A.x_x - A.z_x) * (A.z_y - B.y);

	if ((z1 >= 0 && z2 >= 0 && z3 >= 0) || (z1 <= 0 && z2 <= 0 && z3 <= 0))
	{
		cout << "Точка принадлежит треугольнику";
	}
	else
	{
		cout << "Точка не принадлежит треугольнику";
	}
}
//////////////////////!!zadanie 2!! /////////////////////////////////////////


//////////////////////!!zadanie 4!! /////////////////////////////////////////










//////////////////////!!zadanie 18!! /////////////////////////////////////////
class Pair
{
public:
	int first;
	int second;
	
	Pair() {}
	Pair(int first, int second)
	{
		this->first = first;
		this->second = second;
	}
	Pair(const Pair& obj)
	{
		cout << "Конструктор копирования класса (Pair)" << endl;
	}
	void output()
	{
		cout << "Первое число = " << first << endl;
		cout << "Второе число = " << second << endl;
	}
	void Set_First()
	{
		cout << "Введите число: ";
		cin >> first;
	}
	void Set_Second()
	{
		cout << "Введите число: ";
		cin >> second;
	}
	~Pair() {};
};

class RightAngled :public Pair
{
public:
	RightAngled();

	RightAngled(int first, int second)
	{
		this->first = first;
		this->second = second;
	}
	
	int Square()
	{
		return	(first * second) / 2;
	}
	int Gepotinuza()
	{
		return sqrt(pow(first, 2) + pow(second, 2));
	}

	~RightAngled(){};
};


	

//////////////////////!!zadanie 19!! /////////////////////////////////////////
//19.	Создать класс Triad (тройка чисел). Реализовать конструкторы с параметрами и конструктор копирования, определить методы изменения полей и вычисления суммы чисел. 
//Определить производный класс Triangle (треугольник) с полями-сторонами. Определить методы для определения: существует ли такой треугольник, для вычисления периметра и площади.
//Написать программу, демонстрирующую все разработанные элементы.
class Triad
{
public:
	int first;
	int second;
	int third;

	Triad() {}
	Triad(int first, int second, int third)
	{
		this->first = first;
		this->second = second;
		this->third = third;
	}
	Triad(const Triad& obj)
	{
		cout << "Конструктор копирования класса (Triad)" << endl;
	}
	void output()
	{
		cout << "Первое число = " << first << endl;
		cout << "Второе число = " << second << endl;
		cout << "Третье число = " << third << endl;
	}
	void Set_First()
	{
		cout << "Введите число: ";
		cin >> first;
	}
	void Set_Second()
	{
		cout << "Введите число: ";
		cin >> second;
	}
	void Set_Third()
	{
		cout << "Введите число: ";
		cin >> third;
	}
	int Sum()
	{
		int sum = first + second + third;
		return sum;
	}
	~Triad() {};
};

class Treug :public Triad
{
public:
	Treug();

	Treug(int first, int second, int third)
	{
		this->first = first;
		this->second = second;
		this->third = third;
	};

	~Treug(){};

	bool proverka()
	{
		int z1 =first+second;
		int z2 =second+third;
		int z3 =first+third;

		if ((first < 0) || (second < 0) || (third < 0))
		{
			cout << "Данный треугольник не существует" << endl;
			return false;
		}
		if(z1>third && z2>first && z3>second)
		{
			cout << "Данный треугольник существует" << endl;
			return  true;
		}
		else
		{
			cout << "Данный треугольник не существует" << endl;
			return false;
		}
	}
};
//////////////////////!!zadanie 20!! /////////////////////////////////////////
class man
{
	string name;
	int age;
	bool sex;
	double weight;
public:
	man() {}
	man(string name, int age, bool sex, double weight)
	{
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->weight = weight;
	}
	man(const man& obj)
	{
		cout << "Конструктор копирования класса (Человек)" << endl;
	}
	void name_change(string name)
	{
		this->name = name;
	}
	void age_change(int age)
	{
		this->age = age;
	}
	void weight_change(double weight)
	{
		this->weight = weight;
	}
	void Display_into()
	{
		cout << "Имя: " << this->name << endl;
		cout << "Возраст: " << this->age << endl;
		if (sex == true)
		{
			cout << "Пол: мужской" << endl;
		}
		else
		{
			cout << "Пол: женский" << endl;
		}
		cout << "Вес: " << this->weight << endl;
	}
}; 
class student
{
	int year;
public:
	student(int year)
	{
		this->year = year;
	}
	void year_change(int year)
	{
		year = this->year;
	}
	void minus_year()
	{
		this->year--;
	}
	student& operator++ ()
	{
		this->year++;
		return *this;
	}
	student& operator-- ()
	{
		this->year--;
		return *this;
	}
	void Display_into()
	{
		cout << "Год обучения: " << this->year << endl;
	}
};
//////////////////////!!zadanie 21!! /////////////////////////////////////////
class PairNumber
{
public:
	int a, b, c; // a - 1-ая сторона и так далее
	PairNumber(){}
	PairNumber(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void Display_into()
	{
		cout << "1-ая сторона: " << a << endl;
		cout << "2-ая сторона: " << b << endl;
		cout << "3-ая сторона: " << c << endl;
	}
};
class Rectangle : public PairNumber
{
public:
	int d; // 4-ая сторона
	double p, s;
	Rectangle(){}
	Rectangle(int a, int b, int c, int d) : PairNumber(a, b, c)
	{
		this->d = d;
	}
	double perimeter() // периметр
	{
		return this->p = a + b + c + d;
	}
	double square() // площадь
	{
		return this->s = a * b;
	}
	void Display_into()
	{
		cout << "1-ая сторона: " << a << endl;
		cout << "2-ая сторона: " << b << endl;
		cout << "3-ая сторона: " << c << endl;
		cout << "4-ая сторона: " << d << endl;
	}
};
//////////////////////!!zadanie 25!! /////////////////////////////////////////
class stack
{
public:
	int* arr = new int[0]; // размер стека, в настоящее время пустой
	int head = 0; // индекс последнего элемента стека
	static int* change_size_array(int* old_arr, int size, int change_size) // def для изменения размера arr <type int>
	{
		const auto change_arr = new int[change_size];
		for (int i = 0; i < ((size < change_size) ? size : change_size); i++)
		{
			change_arr[i] = old_arr[i];
		}
		delete[] old_arr;
		return change_arr;
	}
	void push(int x) // добавить элемент в стек
	{
		arr = change_size_array(arr, head, head + 1);
		arr[head] = x;
		head++;
	}
	int pop() // удалить элемент из стека
	{
		if (head - 1 != -1) // проверить пуст ли стек
		{
			int tmp = arr[head - 1];
			arr = change_size_array(arr, head, head - 1);
			head--;
			return tmp;
		}
		else
		{
			cout << "Ошибка, попытка извлечь элемент из пустого стека.\n";
			return -1;
		}
	}
	bool is_empty() // проверить пуст ли стек
	{
		return head - 1 == -1; // if true = empty
	}
};

void function_stack() // божественная def для работы со стеком
{
	stack my_stack;
	int element_stack;
	int menu = 0;
	bool exit_menu = true;
	while (exit_menu)
	{
		cout << "\n1-Введите, что бы добавить элемент в стек\n2-Введите, чтобы извлечь элемент из стека\n3-Введите, что бы проверить пустой ли стек?\n0-Выход\nВведите номер: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Введите элемент стека: ";
			cin >> element_stack;
			my_stack.push(element_stack);
			break;
		}
		case 2:
		{
			element_stack = my_stack.pop();
			cout << "Элемент стека: " << element_stack << endl; // if the stack is empty, garbage is returned
			break;
		}
		case 3:
		{
			cout << "Стек пуст: " << ((my_stack.is_empty() == true) ? "истина" : "ложь") << endl;
			break;
		}
		default:
		{
			exit_menu = false;
			break;
		}
		}
	}
}
//////////////////////!!zadanie 26!! /////////////////////////////////////////
class queue 
{
public:
	int* arr = new int[NULL];
	int head = 0; // индекс первого элемента стека
	int tail = 0; // длина очереди 
	static int* change_size_array(int* old_arr, int size, int change_size) // def для изменения размера arr <type int>
	{
		const auto change_arr = new int[change_size];
		for (int i = 0; i < ((size < change_size) ? size : change_size); i++)
		{
			change_arr[i] = old_arr[i];
		}
		delete[] old_arr;
		return change_arr;
	}
	void push(int x) // добавить элемент в очередь
	{
		arr = change_size_array(arr, tail, tail + 1);
		arr[tail];
		tail++;
	}
	int pop() // удалить элемент из очереди
	{
		if (head != tail)
		{
			int tmp = arr[head];
			for (int i = 0; i < tail; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr = change_size_array(arr, tail, tail - 1);
			tail--;
			return tmp;
		}
		else
		{
			cout << "Ошибка, попытка извлечь элемент из пустой очереди.\n";
			return -1;
		}
	}
	bool is_empty() // проверить пуста ли очередь
	{
		return head == tail;
	}
};

void function_queue() // божественная def для работы с очередью
{
	queue my_queue;
	int element_queue;
	int menu = 0;
	bool exit_menu = true;
	while (exit_menu)
	{
		cout << "\n1-Введите, что бы добавить элемент в очередь\n2-Введите, чтобы извлечь элемент из очереди\n3-Введите что бы проверить пуста ли очередь?\n0-Выход\nВведите номер: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Enter element stack: ";
			cin >> element_queue;
			my_queue.push(element_queue);
			break;
		}
		case 2:
		{
			cout << "Element queue: " << element_queue << endl; // if the queue is empty, garbage is returned
			break;
		}
		case 3:
		{
			cout << "Queue is empty: " << ((my_queue.is_empty() == true) ? "true" : "false") << endl;
			break;
		}
		default:
		{
			exit_menu = false;
			break;
		}
		}
	}
}
////////////////////////!!main!!/////////////////////////////////////////////
///http://cppstudio.com/post/9903/
void funcShow(man object) // хуета для конструктора копирования
{
	cout << "\nФункция принимает объект, как параметр\n";
}

man funcReturnObject() // хуета для конструктора копирования
{
	man object;
	cout << "\nФункция возвращает объект\n";
	return object;
}
int main()
{
	setlocale(LC_ALL, "");
	int p;
	cout << "Enter number: ";
	cin >> p;
	switch (p) {
	case 1: {
		triangle A(1, 1, 8, 8, 10, 1);
		point B(5,4);
		Proverka_Point(A, B);
		break;
	}
	
	case 18: {
		RightAngled a(2, 3);
		cout << "Площадь треугольника = " << a.Square() << endl;
		cout << "Гипотенуза  треугольника = " << a.Gepotinuza() << endl;
		
		break;
	}
	case 19: {
		Treug a(2, 3, 4);
		cout << "Сумма сторон = " << a.Sum() << endl;
		a.proverka();
		break;
	}
	case 20: {
		string name = "Stas";
		man first(name, 12, true, 125.6);
		first.Display_into();
		cout << "////////////////////////" << endl;
		first.age_change(23);
		first.weight_change(242.4);
		first.name_change("xd");
		first.Display_into();
		cout << "///////////student/////////////" << endl;
		student second(4);
		second.Display_into();
		cout << "////////////////////////" << endl;
		second.operator++();
		second.Display_into();
		cout << "//////////копирование//////////////" << endl;
		funcShow(first);
		funcReturnObject();
		man haha2 = first;
		break;
	}
	case 21: {
		PairNumber para(3, 4, 5);
		para.Display_into();
		cout << "////////////" << endl;
		Rectangle para2(4, 4, 4, 11);
		para2.Display_into();
		break;
	}
	case 25: {
		function_stack();
		break;
	}
	case 26: {
		function_queue();
		break;
	}
	case 27: {

		break;
	}
	case 28: {

		break;
	}
	default: {
		cout << "Неверный номер" << endl;
		break;
	}
	}
	return 0;
}
