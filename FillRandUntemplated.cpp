#include "Functions.h"
void FillRand(char Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 255;
	}
}