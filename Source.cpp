#include "Functions.h"
#include"FillRand.cpp"
#include"Print.cpp"
#include"Sort.cpp"

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



