#include "pch.h"
#include "quick_sort.h"


void quickSort(int *array, int left, int right)
{
	int agr; // permission element
	int Lhold = left;	// left border
	int Rhold = right;	// right border
	agr = array[left];
	while (left < right) // until the borders are closed
	{
		while ((array[right] >= agr) && (left < right))
			right--;		// move the right border while the right element is larger then agr
		if (left != right)	// if the borders do not close
		{
			array[left] = array[right];	// move the right element to the resolving one
			left++;	// move the left border to the right
		}
		while ((array[left] <= agr) && (left < right))
			left++;	// move the left border while the left element is less than agr
		if (left != right)	// if the borders do not close
		{
			array[right] = array[left];	// move the element left to the place right

			right--; // move the right border to the right
		}
	}
	array[left] = agr;	// put the resolving element in place
	agr = left;
	left = Lhold;
	right = Rhold;
	if (left < agr)		// Recursively call sorting for the left and right parts of the array
		quickSort(array, left, agr - 1);
	if (right > agr)
		quickSort(array, agr + 1, right);
}
