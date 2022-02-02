#include <iostream>
#include <string>
#include <math.h>
#include<conio.h>
using namespace std;

/*
* Виртуальный базовый класс
* 
* class A
* {
* public:
*	int val;
* };
* class B: public virtual A
* { ... };
*	class C:public virtual A
* {....};
	class D: public B,public C // или 
	{
	public:
	int Get_val()
	{
	return val;//Не однозначность  решение проблемы return B::val
	}
	};


*/

//class Base
//{
//private:
//
//	char* sp1;
//	int size;
//
//public:
//	Base(const char* S, int s)
//	{
//		size = s;
//		sp1 = new char[size];
//	}
//
//	virtual ~Base()
//	{
//		cout << "\nBase\n";
//		delete[]sp1;
//	}
//};
//
//class Derived:public virtual Base
//{
//private:
//
//	char* sp2;
//	int size2;
//
//public:
//
//	Derived(const char* S1, int s1, const char* S2, int s2) :Base(S1, s1)
//	{
//		size2 = s2;
//		sp2 = new char[size2];
//	}
//
//	virtual ~Derived()
//	{
//		cout << "\nDerived\n";
//		delete[]sp2;
//	}
//
//};

/*
* чисто виртуальный деструктор
*/

//class Something
//{
//public:
//	virtual ~Something() = 0;
//};


//class Equation_roots
//{
//public:
//	virtual void Roots() = 0;
//};
//
//class Linear_Equation :public Equation_roots
//{
//	int b, a, x;
//public:
//
//	Linear_Equation()
//	{
//		b = a = x = 0;
//	}
//
//	virtual void Roots()
//	{
//		cout << "\nВведите значения ";
//		cin >> a >> b;
//		x = -b / a;
//		cout << "\nX = " << x;
//	};
//
//
//};
//class The_quadratic_equation :public Equation_roots
//{
//	int x1, a, b, x2, D, c;
//
//public:
//	The_quadratic_equation()
//	{
//		x1 = a = b = 0;
//	}
//
//	virtual void Roots()
//	{
//		cout << "\nВведите значения ";
//		cin >> a >> b >> c;
//		D = (b * b) - 4 * a * c;
//
//		x1 = (-b + sqrt(D)) / (2 * a);
//		x2 = (-b - sqrt(D)) / (2 * a);
//		cout << "\nX1 = " << x1;
//		cout << "\nX2 = " << x2;
//	}
//
//
//};


class Лиса
{

protected:
	int Максимальный_возраст_лисы = 4;
	int Возраст_лисы;
public:
	Лиса()
	{
		Возраст_лисы = 1;
	}

	Лиса(int возраст)
	{
		Возраст_лисы = возраст;
	}


};

class Кролик
{

protected:
	int Максимальный_возраст_кролика = 9;
	int Возраст_кролика;
public:

	Кролик()
	{
		Возраст_кролика = 1;
	}

	Кролик(int возраст)
	{
		Возраст_кролика = возраст;
	}


};

class Трава
{
protected:
	int Есть_или_нет_Травы;
public:
	Трава()
	{
		Есть_или_нет_Травы = 0;
	}

	Трава(int количество)
	{
		if (количество == 1)
		{
			cout << "\nТрава съедена все умерли!\n";
		}
		else
		{
			Есть_или_нет_Травы = количество;
		}
	}

};

class Местоположение :public Лиса, Кролик, Трава
{
protected:

	int Количество_лис;
	int Количество_кроликов;
	int Количество_травы;

public:
	Местоположение()
	{
		Количество_лис = 0;
		Количество_кроликов = 0;
		Количество_травы = 0;
	}
	
	Местоположение(int лисы, int кролики, int трава)
	{
		Количество_лис = лисы;
		Количество_кроликов = кролики;
		Количество_травы = трава;
	}

	void Цикл_Жизни()
	{
		int i = 1;
		int buff = Количество_травы;
		int exit;
		do
		{
			if (i % 3 == 0)
			{
				Количество_травы = buff;
			}
			cout << "\n\nЦикл жизни " << i << " день\n";
			cout << "\nКоличество лис\n" << Количество_лис;
			cout << "\nКоличество кроликов\n" << Количество_кроликов;
			cout << "\nКоличество травы\n" << Количество_травы;
			cout << "\nЗакончить жизненый цикл(нажмите esc)\n";
			exit = _getch();
			if (exit == 27)
			{
				break;
			}
			if (Количество_травы < Количество_кроликов)
			{
				Трава(1);
				break;
			}
			else
			{
				Трава(0);
			}

			if (Количество_кроликов > Количество_лис)
			{
				Количество_кроликов--;
				cout << "\nСегодня погиб 1 кролик\n";
				if (Количество_лис >= 2)
				{
					Количество_лис++;
					cout << "\nЛисы размножились\n";
					cout << "\nТеперь сдесь " << Количество_лис << " лис\n";
				}
			}

			if (Количество_кроликов < Количество_лис|| Количество_кроликов == Количество_лис)
			{
				Количество_лис = 0;
				cout << "\nКроликов слишком мало лисы ушли\n";
				break;
			}

			Кролик(Возраст_кролика++);
			Лиса(Возраст_лисы++);

			if (Возраст_кролика > 9)
			{
				Количество_кроликов--;
				cout << "\nСегодня 1 кролик умер от старости\n";
			}

			if (Возраст_лисы > 4)
			{
				Количество_лис--;
				cout << "\nСегодня 1 лис умер от старости\n";
			}


			if (i % 2 == 0)
			{
				Количество_кроликов = rand() % 10 + Количество_кроликов;
				cout << "\nКролики размножились\n";
				cout << "\nТеперь сдесь " << Количество_кроликов << " кроликов\n";
			}

			if (Количество_кроликов <= 0)
			{
				cout << "\nВсе кролики умерли а лисы ушли\n";
				break;
			}

			Количество_травы--;
			i++;

		} while (true);
		cout << "\n Цикл жизни длился " << i << " Дней\n";

	}


};

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	
	//Base* pBase;
	//pBase = new Derived("string 1", 9, "string 2", 9);
	//delete pBase;

	////Linear_Equation yarv;
	//The_quadratic_equation yrav;
	//yrav.Roots();

	Местоположение Живущие(rand() % 5 + 1, rand() % 10 + 1, rand() % 20 + 10);

	Живущие.Цикл_Жизни();



	return 0;
}