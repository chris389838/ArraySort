#include "pch.h"
#include "heap_sort.h"


void heapGeneration(int *array, int root, int bottom)
{
	int index; // maximum child index
	int flag = 0; // flag that the heap is formed

	// until we reached the last row
	while ((root * 2 <= bottom) && (!flag))
	{
		if (root * 2 == bottom)    // if we are in the last row
			index = root * 2;    // remember the left child
		  // otherwise, remember the larger descendant of two
		else if (array[root * 2] > array[root * 2 + 1])
			index = root * 2;
		else
			index = root * 2 + 1;
		// if the vertex element is less than the maximum descendant
		if (array[root] < array[index])
		{
			swap(array[root], array[index]);
			root = index;
		}
		else
			flag = 1; // the pyramid is formed
	}
}

void heapSort(int *array, int sizeOfArray)
{
	// Form the bottom row of the pyramid
	for (int i = (sizeOfArray / 2) - 1; i >= 0; i--)
		siftDown(array, i, sizeOfArray - 1);

	// Sift through the pyramid the remaining elements
	for (int i = sizeOfArray - 1; i > 0; i--)
	{
		swap(array[0], array[i]);
		siftDown(array, 0, i - 1);
	}
}