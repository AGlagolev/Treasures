#include<iostream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

const int ROWS = 4;
const int COLS = 5;

/******************************ПРОТОТИПЫ ФУНКЦИЙ***************************************************/

//ФУНКЦИЯ FillRand
void FillRand(int Arr[], const int n);      // Массив типа int
void FillRand(double Arr[], const int n);   // Массив типа double
void FillRand(char Arr[], const int n);     // Массив типа char
void FillRand(int Arr[ROWS][COLS]);         // Двухмерный массив int
void FillRand(double Arr[ROWS][COLS]);      // Двухмерный массив double
void FillRand(char Arr[ROWS][COLS]);        // Двухмерный массив char

//ФУНКЦИЯ Print
void Print(int Arr[], const int n);    // Массив типа int
void Print(double Arr[], const int n); // Массив типа double
void Print(char Arr[], const int n);   // Массив типа char
void Print(int Arr[ROWS][COLS]);       // Двухмерный массив int
void Print(double Arr[ROWS][COLS]);    // Двухмерный массив double
void Print(char Arr[ROWS][COLS]);      // Двухмерный массив char

//ФУНКЦИЯ Sort
void Sort(int Arr[], const int n);    // Массив типа int
void Sort(double Arr[], const int n); // Массив типа double
void Sort(char Arr[], const int n);   // Массив типа char
void Sort(int Arr[ROWS][COLS]);       // Двухмерный массив int
void Sort(double Arr[ROWS][COLS]);    // Двухмерный массив double
void Sort(char Arr[ROWS][COLS]);      // Двухмерный массив char

//ФУНКЦИЯ Sum
int  Sum(int Arr[], const int n);	   // Массив типа int
double Sum(double Arr[], const int n); // Массив типа double
int Sum(int Arr[ROWS][COLS]);          // Двухмерный массив int
double Sum(double Arr[ROWS][COLS]);    // Двухмерный массив double
string Sum(char Arr[ROWS][COLS]);      // Двухмерный массив char

//ФУНКЦИЯ Avg
double Avg(int Arr[], const int n);       // Массив типа int
double Avg(double Arr[], const int n);    // Массив типа double
double Avg(int Arr[ROWS][COLS]);          // Двухмерный массив int
double Avg(double Arr[ROWS][COLS]);       // Двухмерный массив double
char Avg(char Arr[ROWS][COLS]);           // Двухмерный массив char

//ФУНКЦИЯ minValueIn
int  minValueIn(int Arr[], const int n);        // Массив типа int
double  minValueIn(double Arr[], const int n);  // Массив типа double
int minValueIn(int Arr[ROWS][COLS]);            // Двухмерный массив int
double minValueIn(double Arr[ROWS][COLS]);      // Двухмерный массив double
char minValueIn(char Arr[ROWS][COLS]);          // Двухмерный массив char

//ФУНКЦИЯ maxValueIn
int  maxValueIn(int Arr[], const int n);          // Массив типа int
double  maxValueIn(double Arr[], const int n);    // Массив типа double
int maxValueIn(int Arr[ROWS][COLS]);              // Двухмерный массив int
double maxValueIn(double Arr[ROWS][COLS]);        // Двухмерный массив double
char maxValueIn(char Arr[ROWS][COLS]);            // Двухмерный массив char

void End();
void Blink();
/**********************************************************************************************/

/**********************************************************************************************/
//#define INTx1
//#define DOUBLEx1
//#define CHARx1

//#define INTx2
//#define DOUBLEx2
#define CHARx2
/**********************************************************************************************/

void main()
{
	setlocale(LC_ALL, "Russian");
	/////////////////////////
#ifdef INTx1
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
#endif // INTx1
	////////////////////////

#ifdef DOUBLEx1
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
#endif // DOUBLEx1
	////////////////////////

#ifdef CHARx1
	const int z = 10;
	char Crr[z];
	FillRand(Crr, z);
	Print(Crr, z);
	Sort(Crr, z);
	Print(Crr, z);
#endif // CHARx1
	////////////////////////

#ifdef INTx2
	int Drr[ROWS][COLS]/*=*/;

	/*{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};*/

	FillRand(Drr);
	cout << "Двухмерный массив int:" << endl;
	Print(Drr);
	cout << endl;
	Sort(Drr);
	cout << "Двухмерный массив int после сортировки:" << endl;
	Print(Drr);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(Drr) << endl;
	cout << "Среднее арифметическое : " << Avg(Drr) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Drr) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Drr) << endl;

	system("pause");
#endif // INTx2
	////////////////////////

#ifdef DOUBLEx2
	double Ddr[ROWS][COLS];
	cout << "Двухмерный массив double:" << endl;
	FillRand(Ddr);
	Print(Ddr);
	Sort(Ddr);
	cout << endl << endl;
	cout << "Двухмерный массив double после сортировки:" << endl;
	Print(Ddr);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(Ddr) << endl;
	cout << "Среднее арифметическое : " << Avg(Ddr) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Ddr) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Ddr) << endl;

	system("pause");
#endif // DOUBLEx2
	////////////////////////

#ifdef CHARx2
	char Dcr[ROWS][COLS];
	
	cout << "Двухмерный массив char:" << endl;
	FillRand(Dcr);
	Print(Dcr);
	Sort(Dcr);
	cout << endl;
	cout << "Двухмерный массив char после сортировки:" << endl;
	Print(Dcr);
	cout << "Сумма элементов массива: " << Sum(Dcr) << endl;
	cout << "Среднее арифметическое : " << Avg(Dcr) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Dcr) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Dcr) << endl;
	system("pause");
#endif // CHARx2
	////////////////////////

	End();
	Blink();
}

/******************************** РЕАЛИЗАЦИИ ФУНКЦИЙ*/
//ФУНКЦИЯ FillRand
void FillRand(int Arr[], const int n)             
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}
//////////////////////// 
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
////////////////////////////////////////
void FillRand(double Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 10000;
		    Arr[i][j] /= 100;
		}

	}

}
///////////////////////////////////////
void FillRand(char Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 255;
		}

	}

}

//ФУНКЦИЯ Print
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
////////////////////////////////////////
void Print(double Arr[ROWS][COLS])
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
////////////////////////////////////////
void Print(char Arr[ROWS][COLS])
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

//ФУНКЦИЯ Sort
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
//////////////////////// 
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
		for (int y = 0; y < COLS; y++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (Arr[x][y] < Arr[i][j])
					{
						int buffer = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}
	
	}
	


}
////////////////////////////////////////
void Sort(double Arr[ROWS][COLS])
{////Сортировка:
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (Arr[x][y] < Arr[i][j])
					{
						double buffer = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}

	}


}
////////////////////////////////////////
void Sort(char Arr[ROWS][COLS])
{////Сортировка:
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (Arr[x][y] < Arr[i][j])
					{
						double buffer = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}

	}


}


//ФУНКЦИЯ Sum
int  Sum(int Arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}
////////////////////////
double Sum(double Arr[], const int n) 
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}
////////////////////////
int Sum(int Arr[ROWS][COLS])
{
	int Res = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Res += Arr[i][j];
		}
	}
	return(Res);
}
////////////////////////
double Sum(double Arr[ROWS][COLS])
{
	double Res = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Res += Arr[i][j];
		}
	}
	return(Res);
}
////////////////////////
string Sum(char Arr[ROWS][COLS])
{
	string Res = "";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Res += Arr[i][j];
		}
	}
	return(Res);
}

//ФУНКЦИЯ Avg
double Avg(int Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
//////////////////////// 
double Avg(double Arr[], const int n) 
{
	return Sum(Arr, n) / n;
}
////////////////////////
double Avg(int Arr[ROWS][COLS])
{
	return (Sum(Arr) / (ROWS + COLS));
}
////////////////////////
double Avg(double Arr[ROWS][COLS])
{
	return (Sum(Arr) / (ROWS + COLS));
}
////////////////////////
char Avg(char Arr[ROWS][COLS])
{
	int Summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Summ += (int)Arr[i][j];
		}
	}
	return((char)(Summ/(COLS+ROWS)));

}

//ФУНКЦИЯ minValueIn
int  minValueIn(int Arr[], const int n)
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}
////////////////////////
double  minValueIn(double Arr[], const int n)
{
	double min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}
////////////////////////
int minValueIn(int Arr[ROWS][COLS])
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
			
	}
	return min;
}
////////////////////////
double minValueIn(double Arr[ROWS][COLS])
{
	double min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}

	}
	return min;
}
///////////////////////
char minValueIn(char Arr[ROWS][COLS])
{
	char min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}

	}
	return min;

}
//ФУНКЦИЯ maxValueIn
int  maxValueIn(int Arr[], const int n)
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}
//////////////////////// 
double  maxValueIn(double Arr[], const int n)
{
	double max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}
////////////////////////
int maxValueIn(int Arr[ROWS][COLS])
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}

	}
	return max;
}
////////////////////////
double maxValueIn(double Arr[ROWS][COLS])
{
	double max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}

	}
	return max;
}
////////////////////////
char maxValueIn(char Arr[ROWS][COLS])
{
	char 
max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}

	}
	return max;
}

void End()
{
	system("cls");
	cout << "\t\t\t\t";
	for (int zz = 1; zz <= 25; zz++)
	{
		setlocale(LC_ALL, "C");
		cout << char(220);
	}
	cout << "\n\t\t\t";
	for (int zz = 1; zz <= 8; zz++)
	{
		setlocale(LC_ALL, "C");
		cout << char(220);
	}
	cout << char(219);
	setlocale(LC_ALL, "");
	cout << "  CПАСИБО ЗА ВНИМАНИЕ  ";
	setlocale(LC_ALL, "C");
	cout << char(219);
	for (int zz = 1; zz <= 8; zz++)
	{
		setlocale(LC_ALL, "C");
		cout << char(220);
	}
	cout << "\n\t\t\t\t";
	cout << char(219);
	for (int zz = 1; zz <= 23; zz++)
	{
		setlocale(LC_ALL, "C");
		cout << char(220);
	}
	cout << char(219);
}

void Blink()
{
	cout << endl;
	for (int zz = 1; zz <= 10; zz++)
	{

		system("color 0C");
		Sleep(1000);
		system("color 0E");
		Sleep(1000);
		system("color 0A");
		Sleep(1000);
	}
	cout << endl;
}
