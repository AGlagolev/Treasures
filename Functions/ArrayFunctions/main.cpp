#include<iostream>
using namespace std;

void FillRand(int Arr[], const int n);
void Print(int Arr[], const int n);
void Sort(int Arr[], const int n);
int  Sum(int Arr[], const int n);	//�������� ������� - Function declaration
double Avg(int Arr[], const int n);
int  minValueIn(int Arr[], const int n);
int  maxValueIn(int Arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	FillRand(Arr, n);
	Print(Arr, n);
	Sort(Arr, n);
	Print(Arr, n);
	cout << "����� ��������� �������: " << Sum(Arr, n) << endl;
	cout << "������� �������������� : " << Avg(Arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Arr, n) << endl;

	//////////////////////////////////////////////////////////////

	const int m = 10;
	double Brr[m];
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);
	cout << "����� ��������� �������: " << Sum(Brr, m) << endl;
	cout << "������� �������������� : " << Avg(Brr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Brr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Brr, m) << endl;
}

void FillRand(int Arr[], const int n)
{
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

void Print(int Arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int Arr[], const int n)
{
	//����������:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

int  Sum(int Arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

double Avg(int Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

int  minValueIn(int Arr[], const int n)
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}
int  maxValueIn(int Arr[], const int n)
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}