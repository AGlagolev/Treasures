#include<iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n); // Overload Find_Rand
void FillRand(char Arr[], const int n);
void FillRand(int Arr[ROWS][COLS]);


void Print(int Arr[], const int n);
void Print(double Arr[], const int n);// Overload Print
void Print(char Arr[], const int n);
void Print(int Arr[ROWS][COLS]); // Двухмерный массив

void Sort(int Arr[], const int n);
void Sort(double Arr[], const int n);// Overload Sort
void Sort(char Arr[], const int n);
void Sort(int Arr[ROWS][COLS]);

int  Sum(int Arr[], const int n);	//Прототип функции - Function declaration
double Sum(double Arr[], const int n); // Overload Sum

double Avg(int Arr[], const int n);
double Avg(double Arr[], const int n); // Overload Avg

int  minValueIn(int Arr[], const int n);
double  minValueIn(double Arr[], const int n); // Overload minValueIn

int  maxValueIn(int Arr[], const int n);
double  maxValueIn(double Arr[], const int n);  // Overload maxValueIn

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];
	

	FillRand(Arr, n);
	Print(Arr, n);
	Sort(Arr, n);
	Print(Arr, n);
	cout << "Сумма элементов массива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(Arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Arr, n) << endl;

	//////////////////////////////////////////////////////////////

	const int m = 10;
	double Brr[m];
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);
	cout << "Сумма элементов массива: " << Sum(Brr, m) << endl;
	cout << "Среднее арифметическое : " << Avg(Brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Brr, m) << endl;

	//////////////////////////////////////////////////////////////

	const int z = 10;
	char Crr[z];
	FillRand(Crr, z);
	Print(Crr, z);
	Sort(Crr, z);
	Print(Crr, z);

	/////////////////////////////////////
	cout << endl;
	cout << "Двумерные массивы" << endl;

	int Drr[ROWS][COLS]/*=*/;
	
	/*{
		{1,2,3},
	    {4,5,6},
	    {7,8,9}
	};*/

	FillRand(Drr);	
	Print(Drr);
	cout << endl;
	Sort(Drr);
	Print(Drr);
}


void FillRand(int Arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}
//////////////////////// Overload_FillRand
void FillRand(double Arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}
////////////////////////////////////////
//////////////////////// Overload_FillRand
void FillRand(char Arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand();
		
	}
}
////////////////////////////////////////
void FillRand(int Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
		
	}

}


void Print(int Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
//////////////////////// Overload_Print
void Print(double Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
////////////////////////////////////////

//////////////////////// Overload_Print_Char
void Print(char Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
////////////////////////////////////////
void Print(int Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}


}


void Sort(int Arr[], const int n)
{
	//Сортировка:
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

//////////////////////// Overload_Sort
void Sort(double Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
////////////////////////////////////////
//////////////////////// Overload_Sort
void Sort(char Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				char buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
////////////////////////////////////////
void Sort(int Arr[ROWS][COLS])
{////Сортировка:
	for (int x = 0; x < ROWS; x++)
	{
		
	for (int i = 0; i < COLS; i++)
	{
		for (int j = i + 1; j < COLS; j++)
		{
			if (Arr[x][j] < Arr[x][i])
			{
				int buffer = Arr[x][i];
				Arr[x][i] = Arr[x][j];
				Arr[x][j] = buffer;
			}
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
//////////////////////// Overload_Sum
double Sum(double Arr[], const int n) 
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}
////////////////////////////////////////

double Avg(int Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

//////////////////////// Overload_Avg
double Avg(double Arr[], const int n) 
{
	return Sum(Arr, n) / n;
}
////////////////////////////////////////////

int  minValueIn(int Arr[], const int n)
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}
//////////////////////// Overload_minValueIn
double  minValueIn(double Arr[], const int n)
{
	double min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}
////////////////////////////////////////////

int  maxValueIn(int Arr[], const int n)
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}
//////////////////////// Overload_maxValueIn
double  maxValueIn(double Arr[], const int n)
{
	double max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}
////////////////////////////////////////////