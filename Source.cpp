#include<iostream>
using namespace std;

/*
Home Work:
1. Написать шаблонные функции для одномерного и двумерного массива
FillRand, Print, Sort, и статистические функции.
Весь код должен быть в одном файле!!!
2. Зарегистрироваться на: https://github.com/
*/

template<typename T>	//Создание шаблона.
void FillRand(T Arr[], const int n);
void FillRand(char Arr[], const int n);
template<typename T>
void Print(T Arr[], const int n);
template<typename T>
void Sort(T Arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int Arr[n];
	FillRand(Arr, n);
	Print(Arr, n);
	Sort(Arr, n);
	Print(Arr, n);

	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);
	Sort(Brr, n);
	Print(Brr, n);

	char Crr[n];
	FillRand(Crr, n);
	Print(Crr, n);
	Sort(Crr, n);
	Print(Crr, n);
}

template<typename T>
void FillRand(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}

void FillRand(char Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 255;
	}
}

template<typename T>
void Print(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void Sort(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T Temp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = Temp;
			}
		}
	}
}