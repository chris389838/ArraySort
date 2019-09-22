#include "pch.h"
#include "merge_sort.h"

void mergeSortUP(int *array, int left, int right)
{
	if (left == right) return; // borders closed
	int middle = (left + right) / 2; // determine the middle of the sequence
	// and recursively call the sort function for each half
	mergeSortUP(array, left, middle);
	mergeSortUP(array, middle + 1, right);
	int i = left;  // beginning of the first path
	int j = middle + 1; // beginning of the second path
	int *temp = new int[right];
	for (int step = 0; step < right - left + 1; step++) 
	{
		// for all elements of the additional array
		// write the smaller of the two path elements into the generated sequence
		// or the remainder of the first path if j > r
		if ((j > right) || ((i <= middle) && (array[i] < array[j])))
		{
			temp[step] = array[i];
			i++;
		}
		else
		{
			temp[step] = array[j];
			j++;
		}
	}
	// rewrite the generated sequence into the original array
	for (int step = 0; step < right - left + 1; step++)
		array[left + step] = temp[step];
}