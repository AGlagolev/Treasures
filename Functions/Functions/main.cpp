#include<iostream>
using namespace std;

int Add(int a, int b);//Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(double a, double b);

//Function doesn't take n arguments
//Unresolved external. (LNK)

void main()
{
	setlocale(LC_ALL, "");
	int a = 3;
	int b = 5;
	int c = Add(a, b);	//Вызов функции (Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << 5 << " * " << 8 << " = " << Mul(5, 8) << endl;
	cout << 5 << " / " << 8 << " = " << Div(5, 8) << endl;
}

int Add(int a, int b)//Реализация функции (Определение функции - Function definition)
{
	int c = a + b;
	return c;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

double Div(double a, double b)
{
	return a / b;
}



/*

type name(parameters)
{

}

*/