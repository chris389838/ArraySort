#include "pch.h"
#include "counting_sort.h"

void countingSort(int sizeOfArray, int *array, int *sortedArray)
{
	int pos;
	for (int i = 0; i < sizeOfArray; i++)
	{
		pos = 0;
		for (int j = 0; j < sizeOfArray; j++)
		{
			if (array[i] > array[j])
				pos++;
		}
		sortedArray[pos] = array[i];
	}
}