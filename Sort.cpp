#include"Functions.h"
template<typename T>void Sort(T Arr[], const int n)
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