#include "Sort.h"
void selectionSort(int *Array,int n)
{
	for(int i = 0; i < n-1; i++)
	{
		int index = i;
		int j;
		for(j = i+1;j < n;j++)
		{
			if(Array[j] < Array[index])
			{
				index = j;
			}
		}
		int tmp = Array[index];
		Array[index] = Array[i];
		Array[i] = tmp;
	}
}
