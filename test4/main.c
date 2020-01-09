#include <stdio.h>
#include "Sort.h"

void main()
{
	int i;
	//define the integrate arrry
	int array[] = {12,34,25.51,16,26,46,45,78,5,3,27,85};
	int array2[] = {12,34,25.51,16,26,46,45,78,5,3,27,85};
	//calculate the length of the array
	int len = sizeof(array)/sizeof(int);
	printf("Sort Array:\n");
	for(i = 0;i < len;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");

	selectionSort(array,len);
	printf("Selection Sort:\n");
	for(i = 0;i < len; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	

	insertSort(array2,len);
	printf("Insert Sort:\n");
	for(i = 0;i < len;i++)
	{
		printf("%d ",array2[i]);
	}
	printf("\n");





}	
