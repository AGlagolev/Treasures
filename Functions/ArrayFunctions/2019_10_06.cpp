#include<iostream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

const int ROWS = 4;
const int COLS = 5;

/******************************��������� �������***************************************************/

//������� FillRand
void FillRand(int Arr[], const int n);      // ������ ���� int
void FillRand(double Arr[], const int n);   // ������ ���� double
void FillRand(char Arr[], const int n);     // ������ ���� char
void FillRand(int Arr[ROWS][COLS]);         // ���������� ������ int
void FillRand(double Arr[ROWS][COLS]);      // ���������� ������ double
void FillRand(char Arr[ROWS][COLS]);        // ���������� ������ char

//������� Print
void Print(int Arr[], const int n);    // ������ ���� int
void Print(double Arr[], const int n); // ������ ���� double
void Print(char Arr[], const int n);   // ������ ���� char
void Print(int Arr[ROWS][COLS]);       // ���������� ������ int
void Print(double Arr[ROWS][COLS]);    // ���������� ������ double
void Print(char Arr[ROWS][COLS]);      // ���������� ������ char

//������� Sort
void Sort(int Arr[], const int n);    // ������ ���� int
void Sort(double Arr[], const int n); // ������ ���� double
void Sort(char Arr[], const int n);   // ������ ���� char
void Sort(int Arr[ROWS][COLS]);       // ���������� ������ int
void Sort(double Arr[ROWS][COLS]);    // ���������� ������ double
void Sort(char Arr[ROWS][COLS]);      // ���������� ������ char

//������� Sum
int  Sum(int Arr[], const int n);	   // ������ ���� int
double Sum(double Arr[], const int n); // ������ ���� double
int Sum(int Arr[ROWS][COLS]);          // ���������� ������ int
double Sum(double Arr[ROWS][COLS]);    // ���������� ������ double
string Sum(char Arr[ROWS][COLS]);      // ���������� ������ char

//������� Avg
double Avg(int Arr[], const int n);       // ������ ���� int
double Avg(double Arr[], const int n);    // ������ ���� double
double Avg(int Arr[ROWS][COLS]);          // ���������� ������ int
double Avg(double Arr[ROWS][COLS]);       // ���������� ������ double
char Avg(char Arr[ROWS][COLS]);           // ���������� ������ char

//������� minValueIn
int  minValueIn(int Arr[], const int n);        // ������ ���� int
double  minValueIn(double Arr[], const int n);  // ������ ���� double
int minValueIn(int Arr[ROWS][COLS]);            // ���������� ������ int
double minValueIn(double Arr[ROWS][COLS]);      // ���������� ������ double
char minValueIn(char Arr[ROWS][COLS]);          // ���������� ������ char

//������� maxValueIn
int  maxValueIn(int Arr[], const int n);          // ������ ���� int
double  maxValueIn(double Arr[], const int n);    // ������ ���� double
int maxValueIn(int Arr[ROWS][COLS]);              // ���������� ������ int
double maxValueIn(double Arr[ROWS][COLS]);        // ���������� ������ double
char maxValueIn(char Arr[ROWS][COLS]);            // ���������� ������ char

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
	cout << "����� ��������� �������: " << Sum(Arr, n) << endl;
	cout << "������� �������������� : " << Avg(Arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Arr, n) << endl;
#endif // INTx1
	////////////////////////

#ifdef DOUBLEx1
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
	cout << "���������� ������ int:" << endl;
	Print(Drr);
	cout << endl;
	Sort(Drr);
	cout << "���������� ������ int ����� ����������:" << endl;
	Print(Drr);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(Drr) << endl;
	cout << "������� �������������� : " << Avg(Drr) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Drr) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Drr) << endl;

	system("pause");
#endif // INTx2
	////////////////////////

#ifdef DOUBLEx2
	double Ddr[ROWS][COLS];
	cout << "���������� ������ double:" << endl;
	FillRand(Ddr);
	Print(Ddr);
	Sort(Ddr);
	cout << endl << endl;
	cout << "���������� ������ double ����� ����������:" << endl;
	Print(Ddr);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(Ddr) << endl;
	cout << "������� �������������� : " << Avg(Ddr) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Ddr) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Ddr) << endl;

	system("pause");
#endif // DOUBLEx2
	////////////////////////

#ifdef CHARx2
	char Dcr[ROWS][COLS];
	
	cout << "���������� ������ char:" << endl;
	FillRand(Dcr);
	Print(Dcr);
	Sort(Dcr);
	cout << endl;
	cout << "���������� ������ char ����� ����������:" << endl;
	Print(Dcr);
	cout << "����� ��������� �������: " << Sum(Dcr) << endl;
	cout << "������� �������������� : " << Avg(Dcr) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Dcr) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Dcr) << endl;
	system("pause");
#endif // CHARx2
	////////////////////////

	End();
	Blink();
}

/******************************** ���������� �������*/
//������� FillRand
void FillRand(int Arr[], const int n)             
{
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}
//////////////////////// 
void FillRand(double Arr[], const int n) 
{
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}
////////////////////////////////////////
void FillRand(char Arr[], const int n)
{
	//���������� ������� ���������� �������:
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

//������� Print
void Print(int Arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
//////////////////////// Overload_Print
void Print(double Arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
////////////////////////////////////////
void Print(char Arr[], const int n)
{
	//����� ������� �� �����:
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

//������� Sort
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
//////////////////////// 
void Sort(double Arr[], const int n)
{
	//����������:
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
	//����������:
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
{////����������:
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
{////����������:
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
{////����������:
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


//������� Sum
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

//������� Avg
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

//������� minValueIn
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
//������� maxValueIn
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
	cout << "  C������ �� ��������  ";
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
