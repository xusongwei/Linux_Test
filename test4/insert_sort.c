#include "Sort.h"
void insertSort(int *Array,int n)
{
	int i,j,temp;
        for(i = 1; i < n; i++)
        {
		temp =Array[i];
		for(j = i;j > 0 && Array[j-1] > temp; j--)
		{
			Array[j] = Array[j-1];
		}
		Array[j] = temp;
        }
}

