#include <iostream>
#include <string>
#include <math.h>
#include<conio.h>
using namespace std;

/*
* ����������� ������� �����
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
	class D: public B,public C // ��� 
	{
	public:
	int Get_val()
	{
	return val;//�� �������������  ������� �������� return B::val
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
* ����� ����������� ����������
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
//		cout << "\n������� �������� ";
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
//		cout << "\n������� �������� ";
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


class ����
{

protected:
	int ������������_�������_���� = 4;
	int �������_����;
public:
	����()
	{
		�������_���� = 1;
	}

	����(int �������)
	{
		�������_���� = �������;
	}


};

class ������
{

protected:
	int ������������_�������_������� = 9;
	int �������_�������;
public:

	������()
	{
		�������_������� = 1;
	}

	������(int �������)
	{
		�������_������� = �������;
	}


};

class �����
{
protected:
	int ����_���_���_�����;
public:
	�����()
	{
		����_���_���_����� = 0;
	}

	�����(int ����������)
	{
		if (���������� == 1)
		{
			cout << "\n����� ������� ��� ������!\n";
		}
		else
		{
			����_���_���_����� = ����������;
		}
	}

};

class �������������� :public ����, ������, �����
{
protected:

	int ����������_���;
	int ����������_��������;
	int ����������_�����;

public:
	��������������()
	{
		����������_��� = 0;
		����������_�������� = 0;
		����������_����� = 0;
	}
	
	��������������(int ����, int �������, int �����)
	{
		����������_��� = ����;
		����������_�������� = �������;
		����������_����� = �����;
	}

	void ����_�����()
	{
		int i = 1;
		int buff = ����������_�����;
		int exit;
		do
		{
			if (i % 3 == 0)
			{
				����������_����� = buff;
			}
			cout << "\n\n���� ����� " << i << " ����\n";
			cout << "\n���������� ���\n" << ����������_���;
			cout << "\n���������� ��������\n" << ����������_��������;
			cout << "\n���������� �����\n" << ����������_�����;
			cout << "\n��������� �������� ����(������� esc)\n";
			exit = _getch();
			if (exit == 27)
			{
				break;
			}
			if (����������_����� < ����������_��������)
			{
				�����(1);
				break;
			}
			else
			{
				�����(0);
			}

			if (����������_�������� > ����������_���)
			{
				����������_��������--;
				cout << "\n������� ����� 1 ������\n";
				if (����������_��� >= 2)
				{
					����������_���++;
					cout << "\n���� ������������\n";
					cout << "\n������ ����� " << ����������_��� << " ���\n";
				}
			}

			if (����������_�������� < ����������_���|| ����������_�������� == ����������_���)
			{
				����������_��� = 0;
				cout << "\n�������� ������� ���� ���� ����\n";
				break;
			}

			������(�������_�������++);
			����(�������_����++);

			if (�������_������� > 9)
			{
				����������_��������--;
				cout << "\n������� 1 ������ ���� �� ��������\n";
			}

			if (�������_���� > 4)
			{
				����������_���--;
				cout << "\n������� 1 ��� ���� �� ��������\n";
			}


			if (i % 2 == 0)
			{
				����������_�������� = rand() % 10 + ����������_��������;
				cout << "\n������� ������������\n";
				cout << "\n������ ����� " << ����������_�������� << " ��������\n";
			}

			if (����������_�������� <= 0)
			{
				cout << "\n��� ������� ������ � ���� ����\n";
				break;
			}

			����������_�����--;
			i++;

		} while (true);
		cout << "\n ���� ����� ������ " << i << " ����\n";

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

	�������������� �������(rand() % 5 + 1, rand() % 10 + 1, rand() % 20 + 10);

	�������.����_�����();



	return 0;
}