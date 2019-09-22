#include "pch.h"
#include "merge_sort.h"

// Upward merge method
void mergeSortDOWN(int *array, int sizeOfArray)
{
	int numOfStep = 1; // step to split the sequence
	int *temp = new int[sizeOfArray];
	while (numOfStep < sizeOfArray)  
	{
		int index = 0;    // index of the resulting array
		int left = 0;      // left border
		int middle = left + numOfStep;  // middle
		int right = left + numOfStep * 2;  // right border
		do
		{
			middle = middle < sizeOfArray ? middle : sizeOfArray;  // sortable section does not go beyond the sequence
			right = right < sizeOfArray ? right : sizeOfArray;
			int index1 = left, index2 = middle; // indices of compared elements
			for (; index1 < middle && index2 < right; ) // until i1 has reached the middle and i2 has not reached the end
			{
				if (array[index1] < array[index2]) { 
					temp[index++] = array[index1++]; 
				} // fill the area of ​​the resulting sequence
				else { 
					temp[index++] = array[index2++]; 
				}
			}
			// either index1 <middle or index2 <right - only one of the while statements can execute
			while (index1 < middle) 
				temp[index++] = array[index1++]; // enter the remaining elements of the sorted areas
			while (index2 < right) 
				temp[index++] = array[index2++]; // into the resulting array
			left += numOfStep * 2; // move to the next sortable section
			middle += numOfStep * 2;
			right += numOfStep * 2;
		} 
		while (left < sizeOfArray); // while the left border of the sorted area is within the sequence
		for (int i = 0; i < sizeOfArray; i++) // transfer the generated array back to array
			array[i] = temp[i];
		numOfStep *= 2; // double the split step
	}
}
